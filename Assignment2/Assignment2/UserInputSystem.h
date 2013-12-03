//
//  UserInputSystem.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/30/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__UserInputSystem__
#define __Assignment1__UserInputSystem__

#include <iostream>
#include <glfw3.h>

class UserInputSystem
{
private:
    UserInputSystem();
    ~UserInputSystem();
    void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
    
public:
    static UserInputSystem& getUserInputSystem();
    static void destroyUserInputSystem();
    static void keyCallbackFun(GLFWwindow *window, int key, int scancode, int action, int mods);
    
    
};

#endif /* defined(__Assignment1__UserInputSystem__) */
