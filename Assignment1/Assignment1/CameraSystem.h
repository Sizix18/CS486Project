//
//  CameraSystem.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/25/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

//Camera Control: the user must be able to direct the gaze direction of the camera using the mouse and move within
//the world using the forward and backward arrow keys on the keyboard. (the left and right arrow key are not used.)
//Directing the gaze works as an inverted trackball, as we have discussed in class.
//In this exercise, we will replicate a trackball by using the mouse pointer to grab a hold of the bounding sphere of
//the scene and map the mouse’s motion to an angle-axis rotation. In turn, the angle-axis is represented as a quaternion
//and combined with any existing modeling transformations.
//For students who have little to no experience with virtual trackballs, the paper titled Virtual Trackballs Revisited
//by Henriksen et al. ___ is an excellent survey on the topic. Additionally, the required textbook covers quaternions in
//sufficient depth to complete this assignment.

#ifndef __Assignment1__CameraSystem__
#define __Assignment1__CameraSystem__

#include <iostream>
#include "Entity.h"

class CameraSystem
{
private:
    Entity *_currentCamera;
    CameraSystem();
    ~CameraSystem();
public:
    
    Entity *getCurrentCamera();
    void setCurrentCamera(Entity *newCamera);
    static CameraSystem& getCameraSystem();
    static void destroyCameraSystem();
    
};
#endif /* defined(__Assignment1__CameraSystem__) */
