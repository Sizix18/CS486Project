//
//  Vec4.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "Vec4.h"
Vec4 makeVec4(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    Vec4 newVec;
    newVec.x = x;
    newVec.y = y;
    newVec.z = z;
    newVec.w = w;
    
    return newVec;
}
