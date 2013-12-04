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
    
    Entity *square0 = new Entity(resourceManager->getVertexBufferArray()->at(0), makeVec3(0.0f, 0.0f, 0.0f));
    square0->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    square0->setScale(makeVec3(.10f, .10f, .10f));
    square0->setVelocity(makeVec3(0.0f, 0.01f, 0.00f));
    square0->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    square0->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(square0);
    
    Entity *square1 = new Entity(resourceManager->getVertexBufferArray()->at(1), makeVec3(0.0f, -.9f, 0.0f));
    square1->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    square1->setScale(makeVec3(.10f, .10f, .10f));
    square1->setVelocity(makeVec3(-0.01f, 0.01f, 0.00f));
    square1->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    square1->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    
    _children->push_back(square1);
    
    Entity *square2 = new Entity(resourceManager->getVertexBufferArray()->at(2), makeVec3(-.9f, 0.0f, 0.0f));
    square2->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    square2->setScale(makeVec3(.10f, .10f, .10f));
    square2->setVelocity(makeVec3(-0.01f, 0.01f, 0.00f));
    square2->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    square2->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    _children->push_back(square2);
    
    Entity *square3 = new Entity(resourceManager->getVertexBufferArray()->at(3), makeVec3(.9f, 0.0f, 0.0f));
    square3->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    square3->setScale(makeVec3(.10f, .10f, .10f));
    square3->setVelocity(makeVec3(0.01f, -0.01f, 0.00f));
    square3->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    square3->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    _children->push_back(square3);
    
    Entity *square4 = new Entity(resourceManager->getVertexBufferArray()->at(4), makeVec3(0.0f, 0.90f, 0.0f));
    square4->setRotation(makeVec3(0.0f, 0.0f, 0.0f));
    square4->setScale(makeVec3(.10f, .10f, .10f));
    square4->setVelocity(makeVec3(0.01f, -0.01f, 0.00f));
    square4->setRotationVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    square4->setScaleVelocity(makeVec3(0.0f, 0.0f, 0.0f));
    _children->push_back(square4);
    
    
    //camera location
   Entity* camera = new Entity(NULL, makeVec3(0.0f, 0.0f, -1.0f));
    camera->setEyeVec(makeVec3(0.0f, 0.0f, 10.0f));
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