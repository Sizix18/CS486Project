//
//  UserInputSystem.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/30/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "UserInputSystem.h"

UserInputSystem::UserInputSystem()
{
    
}

UserInputSystem::~UserInputSystem()
{
    
}
void UserInputSystem::keyCallback(GLFWwindow *window,
                                  int key,
                                  int scancode,
                                  int action,
                                  int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    {
        /*if (GLFW_CURSOR_DISABLED == glfwGetInputMode(glfwGetCurrentContext(), GLFW_CURSOR ))
        {
            glfwSetInputMode(glfwGetCurrentContext(), GLFW_CURSOR, GLFW_CURSOR_NORMAL);
        }
        else
        {
            glfwSetInputMode(glfwGetCurrentContext(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        }*/
    }
}

void UserInputSystem::keyCallbackFun(GLFWwindow *window,
                                     int key,
                                     int scancode,
                                     int action,
                                     int mods)
{
    UserInputSystem *userInputSystem = &getUserInputSystem();
    userInputSystem->keyCallback(window, key, scancode, action, mods);
}

UserInputSystem& UserInputSystem::getUserInputSystem()
{
    static UserInputSystem* userInputSystem = NULL;
    if (userInputSystem == NULL) {
        glfwSetKeyCallback(glfwGetCurrentContext(), *keyCallbackFun);
        glfwSetInputMode(glfwGetCurrentContext(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        
        userInputSystem = new UserInputSystem();
    }
    return *userInputSystem;
    
}

void UserInputSystem::destroyUserInputSystem()
{
    UserInputSystem* userInputSystem = &getUserInputSystem();
    delete userInputSystem;
}

