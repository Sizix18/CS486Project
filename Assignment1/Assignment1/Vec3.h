//
//  Vec3.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__Vec3__
#define __Assignment1__Vec3__

#include <iostream>
#include <glfw3.h>

typedef struct {
    
    GLfloat x;
    GLfloat y;
    GLfloat z;
    
}Vec3;

Vec3 makeVec3(GLfloat x, GLfloat y, GLfloat z);
Vec3 addVec3(Vec3 vecA, Vec3 vecB);


#endif /* defined(__Assignment1__Vec3__) */
