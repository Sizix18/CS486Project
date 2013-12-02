//
//  Scene.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/25/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "Scene.h"
#include "CameraSystem.h"
#include "ResourceManager.h"

std::vector<Entity *> *Scene::getChildren()
{
    return _children;
}

Scene::Scene()
{
    _children = new std::vector<Entity *>();
    
    ResourceManager *resourceManager = &ResourceManager::getResourceManager();
    
    Entity *skybox = new Entity(resourceManager->getVertexBufferArray()->at(2), makeVec3(0.0f, 0.0f, 0.0f));
    skybox->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    skybox->setScale(makeVec3(10.0f, 10.0f, 10.0f));
    skybox->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    skybox->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    skybox->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(skybox);
    
    Entity *entity = new Entity(resourceManager->getVertexBufferArray()->at(1), makeVec3(0.0f, 0.0f, 0.0f));
    entity->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    entity->setScale(makeVec3(2.0f, 2.0f, 2.0f));
    entity->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    entity->setRotationVelocity(makeVec3(1.0f, 1.0f, 0.0f));
    entity->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(entity);
    //camera location
   Entity* camera = new Entity(NULL, makeVec3(0.0f, 0.0f, -1.0f));
    camera->setEyeVec(makeVec3(0.0f, 0.0f, -1.0f));
    //move the camera
    camera->setVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(camera);
    
    CameraSystem *cameraSystem = &CameraSystem::getCameraSystem();

    cameraSystem->setCurrentCamera(camera);

}
Scene::~Scene()
{
    for (std::vector<Entity *>::iterator iterator = _children->begin(); iterator !=_children->end(); iterator++) {
        delete *iterator;
    }
    delete _children;
}