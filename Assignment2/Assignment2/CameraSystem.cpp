//
//  CameraSystem.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/25/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "CameraSystem.h"
#include "RenderSystem.h"

CameraSystem::CameraSystem()
{
    
}
CameraSystem::~CameraSystem()
{
    
}

Entity* CameraSystem::getCurrentCamera()
{
    return _currentCamera;
}
void CameraSystem::setCurrentCamera(Entity *newCamera)
{
    _currentCamera = newCamera;
    RenderSystem *renderSystem = &RenderSystem::getRenderSystem();
    renderSystem->setCurrentCamera(_currentCamera);
}
CameraSystem& CameraSystem::getCameraSystem()
{
    static CameraSystem *cameraSystem = NULL;
    
    if (cameraSystem == NULL) {
        cameraSystem = new CameraSystem();
    }
    return *cameraSystem;
}
void CameraSystem::destroyCameraSystem()
{
    CameraSystem *cameraSystem = &getCameraSystem();
    delete cameraSystem;
}