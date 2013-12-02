//
//  Vec4.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__Vec4__
#define __Assignment1__Vec4__

#include <iostream>
#include <glfw3.h>

typedef struct {
    GLfloat x;
    GLfloat y;
    GLfloat z;
    GLfloat w;
    
}Vec4;

Vec4 makeVec4(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#endif /* defined(__Assignment1__Vec4__) */
