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
    skybox->setScale(makeVec3(20.0f, 20.0f, 20.0f));
    skybox->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    skybox->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    skybox->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(skybox);
    
    Entity *plane = new Entity(resourceManager->getVertexBufferArray()->at(3), makeVec3(0.0f, 0.0f, 0.0f));
    plane->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    plane->setScale(makeVec3(2.0f, 2.0f, 2.0f));
    plane->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    plane->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    plane->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(plane);
    
    Entity *cube = new Entity(resourceManager->getVertexBufferArray()->at(1), makeVec3(0.0f, 3.0f, 0.0f));
    cube->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    cube->setScale(makeVec3(4.0f, 4.0f, 4.0f));
    cube->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    cube->setRotationVelocity(makeVec3(2.0f, 1.0f, 1.0f));
    cube->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    _children->push_back(cube);
    
    Entity *pyramid = new Entity(resourceManager->getVertexBufferArray()->at(4), makeVec3(8.0f, 3.0f, 0.0f));
    pyramid->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    pyramid->setScale(makeVec3(2.0f, 2.0f, 2.0f));
    pyramid->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    pyramid->setRotationVelocity(makeVec3(1.0f, 2.0f, 1.0f));
    pyramid->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(pyramid);
    
    Entity *skybox2 = new Entity(resourceManager->getVertexBufferArray()->at(2), makeVec3(-8.0f, 3.0f, 0.0f));
    skybox2->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    skybox2->setScale(makeVec3(2.0f, 2.0f, 2.0f));
    skybox2->setVelocity(makeVec3(0.0f, 0.00f, 0.00f));
    skybox2->setRotationVelocity(makeVec3(1.0f, 1.0f, 1.0f));
    skybox2->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(skybox2);
    
    //camera location
   Entity* camera = new Entity(NULL, makeVec3(0.0f, 0.0f, -10.0f));
    camera->setEyeVec(makeVec3(0.0f, 0.0f, 1000.0f));
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