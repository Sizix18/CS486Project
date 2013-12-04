//
//  ResourceManager.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "ResourceManager.h"
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
    
    
    ShaderData* green = new ShaderData(makeVec4(.20f, .90f, 0.20f, 1.0f), makeVec3(0.0f, 0.50f, 1.0f));
    _shaderData->push_back(green);
    
    ShaderData* blue = new ShaderData(makeVec4(0.4f, 0.3f, 1.0f, 1.0f), makeVec3(0.0f, .50f, 1.0f));
    _shaderData->push_back(blue);
    
    ShaderData* purple = new ShaderData(makeVec4(.6f, 0.0f, .7f, 1.0f), makeVec3(0.0f, 0.50f, 1.0f));
    _shaderData->push_back(purple);
    
    ShaderData* orange = new ShaderData(makeVec4(1.0f, .50f, 0.0f, 1.0f),makeVec3(0.0f, 0.50f, 1.0f));
    _shaderData->push_back(orange);
    
    ShaderData* red = new ShaderData(makeVec4(1.0f, .3f, .3f, 1.0f), makeVec3(0.0f, 0.50f, 1.0f));
    _shaderData->push_back(red);

    
    
    _vertexBufferArray = new std::vector<VertexBuffer*>();
    
   VertexBuffer *square0 = new VertexBuffer(PlaneVertices,
                                            sizeof(PlaneVertices),
                                            GL_QUADS,
                                            4,
                                            sizeof(VertexDataPosn),
                                            _shaderArray->at(1),
                                            _shaderData->at(0),
                                            NULL,
                                            NULL);
    
    _vertexBufferArray->push_back(square0);
    
    VertexBuffer *square1 = new VertexBuffer(PlaneVertices,
                                             sizeof(PlaneVertices),
                                             GL_QUADS,
                                             4,
                                             sizeof(VertexDataPosn),
                                             _shaderArray->at(1),
                                             _shaderData->at(1),
                                             NULL,
                                             NULL);
    
    _vertexBufferArray->push_back(square1);

    
    VertexBuffer *square2 = new VertexBuffer(PlaneVertices,
                                             sizeof(PlaneVertices),
                                             GL_QUADS,
                                             4,
                                             sizeof(VertexDataPosn),
                                             _shaderArray->at(1),
                                             _shaderData->at(2),
                                             NULL,
                                             NULL);
    
    _vertexBufferArray->push_back(square2);

    VertexBuffer *square3 = new VertexBuffer(PlaneVertices,
                                             sizeof(PlaneVertices),
                                             GL_QUADS,
                                             4,
                                             sizeof(VertexDataPosn),
                                             _shaderArray->at(1),
                                             _shaderData->at(3),
                                             NULL,
                                             NULL);
    
    _vertexBufferArray->push_back(square3);

    VertexBuffer *square4 = new VertexBuffer(PlaneVertices,
                                             sizeof(PlaneVertices),
                                             GL_QUADS,
                                             4,
                                             sizeof(VertexDataPosn),
                                             _shaderArray->at(1),
                                             _shaderData->at(4),
                                             NULL,
                                             NULL);
    
    _vertexBufferArray->push_back(square4);

    
    
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

