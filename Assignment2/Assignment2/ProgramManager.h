//
//  ProgramManager.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/23/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__ProgramManager__
#define __Assignment1__ProgramManager__

#include <iostream>
#include <glfw3.h>
#include "RenderSystem.h"
#include "ResourceManager.h"
#include "MovementSystem.h"
#include "CameraSystem.h"
//#include "UserInputSystem.h"
#include "Entity.h"
#include "Scene.h"

class ProgramManager{
private:
    bool _running;
    RenderSystem *_renderSystem;
    ResourceManager *_resourceManager;
    MovementSystem *_movementSystem;
    CameraSystem *_cameraSystem;
    //UserInputSystem *_userInputSystem;
    GLFWwindow *_window;
    
    Scene *scene;
    
    ProgramManager(bool running);
    ~ProgramManager();
    
public:
    
    void runProgramLoop();
    static ProgramManager& getProgramManager();
    static void destroyProgramManager();
    
};
#endif /* defined(__Assignment1__ProgramManager__) */
