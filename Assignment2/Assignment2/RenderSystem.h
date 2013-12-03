//
//  RenderSystem.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/23/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__RenderSystem__
#define __Assignment1__RenderSystem__

#include <iostream>
#define GLFW_INCLUDE_GLU
#include <glfw3.h>
#include "VertexBuffer.h"
#include <vector>
#include "ShaderInterface.h"
#include "Entity.h"
#include "CameraSystem.h"

class RenderSystem
{
private:
    GLFWwindow *_window;
    
    CameraSystem *_cameraSystem;
    Entity *_currentCamera;
    
    RenderSystem(); 
    ~RenderSystem();
public:
    
    Entity *getCurrentCamera();
    void setCurrentCamera(Entity *newCamera);
    void render(std::vector<Entity*> *entityArray);
    static RenderSystem& getRenderSystem();
    static void destroyRenderSystem();
    
};
#endif /* defined(__Assignment1__RenderSystem__) */
