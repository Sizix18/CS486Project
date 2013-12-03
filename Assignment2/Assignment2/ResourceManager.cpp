//
//  ResourceManager.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "ResourceManager.h"
#include "TriangleVertices.h"
#include "CubeVertices.h"
#include "SkyboxVertices.h"
#include "PlaneVertices.h"

std::vector<ShaderInterface*>* ResourceManager::getShaderArray()
{
    return _shaderArray;
}

std::vector<VertexBuffer*>* ResourceManager::getVertexBufferArray()
{
    return _vertexBufferArray;
}

ResourceManager::ResourceManager()
{
    _shaderArray = new std::vector<ShaderInterface *>();
    _shaderData = new std::vector<ShaderData*>();
    ShaderInterface* shader = new ShaderInterface("ColorShader.vsh", "ColorShader.fsh");
    _shaderArray->push_back(shader);
    
    ShaderInterface* lightShader = new ShaderInterface("SimpleLightShader.vsh", "SimpleLightShader.fsh");
    _shaderArray->push_back(lightShader);
    
    
    ShaderData* mintGreen = new ShaderData(makeVec4(.60f, 1.0f, 0.80f, 1.0f), makeVec3(0.0f, 0.0f, -5.0f));
    _shaderData->push_back(mintGreen);
    ShaderData* skyBlue = new ShaderData(makeVec4(0.7f, 0.7f, 1.0f, 1.0f), makeVec3(0.0f, 0.0f, -10.0f));
    _shaderData->push_back(skyBlue);
    ShaderData* orange = new ShaderData(makeVec4(1.0f, .50f, 0.0f, 1.0f),makeVec3(0.0f, 0.0f, 5.0f));
    _shaderData->push_back(orange);
    ShaderData* red = new ShaderData(makeVec4(1.0f, .2f, .2f, 1.0f), makeVec3(0.0f, 0.0f, 5.0f));
    _shaderData->push_back(red);

    
    
    _vertexBufferArray = new std::vector<VertexBuffer*>();
    VertexBuffer *vertexBuffer = new VertexBuffer(vertices,
                                                  sizeof(vertices),
                                                  GL_TRIANGLES,
                                                  3,
                                                  sizeof(GLfloat)*3,
                                                  _shaderArray->at(1),
                                                  _shaderData->at(0),
                                                  NULL,
                                                  NULL);
    _vertexBufferArray->push_back(vertexBuffer);
    
    VertexBuffer *cubeVertexBuffer = new VertexBuffer(cubeVertices,
                                                      sizeof(cubeVertices),
                                                      GL_TRIANGLES,
                                                      36,
                                                      sizeof(VertexDataPosnNorm),
                                                      _shaderArray->at(1),
                                                      _shaderData->at(2),
                                                      (GLvoid*)(offsetof(VertexDataPosnNorm, positionCoordinates)),
                                                      (GLvoid*)(offsetof(VertexDataPosnNorm, normalCoordinates)));
    _vertexBufferArray->push_back(cubeVertexBuffer);
    
    VertexBuffer *skyboxVertexBuffer = new VertexBuffer(skyboxVertices,
                                                        sizeof(skyboxVertices),
                                                        GL_QUADS,
                                                        24,
                                                        sizeof(VertexDataPosn),
                                                        _shaderArray->at(0),
                                                        _shaderData->at(1),
                                                        NULL,
                                                        NULL);
    _vertexBufferArray->push_back(skyboxVertexBuffer);
    
   VertexBuffer *groundPlaneBuffer = new VertexBuffer(PlaneVertices,
                                                       sizeof(PlaneVertices),
                                                       GL_QUADS,
                                                       4,
                                                       sizeof(VertexDataPosn),
                                                       _shaderArray->at(0),
                                                       _shaderData->at(0),
                                                       NULL,
                                                       NULL);
    _vertexBufferArray->push_back(groundPlaneBuffer);
    
    
}

ResourceManager::~ResourceManager()
{
    for (std::vector<ShaderInterface*>::iterator iterator = _shaderArray->begin(); iterator !=_shaderArray->end(); iterator++) {
        delete *iterator;
    }
    delete _shaderArray;

    for (std::vector<VertexBuffer*>::iterator iterator = _vertexBufferArray->begin(); iterator !=_vertexBufferArray->end(); iterator++) {
        delete *iterator;
    }
    delete _vertexBufferArray;

    for (std::vector<ShaderData*>::iterator iterator = _shaderData->begin(); iterator !=_shaderData->end(); iterator++) {
        delete *iterator;
    }
    delete _shaderData;
}

ResourceManager& ResourceManager::getResourceManager()
{
    static ResourceManager *resourceManager = NULL;
    if (resourceManager == NULL) {
        resourceManager = new ResourceManager();
    }
    return *resourceManager;
}

void ResourceManager::destroyResourceManager()
{
    ResourceManager *resourceManager = &getResourceManager();
    delete resourceManager;
}

