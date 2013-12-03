//
//  Vec3.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "Vec3.h"
Vec3 makeVec3(GLfloat x, GLfloat y, GLfloat z)
{
    Vec3 newVec;
    newVec.x = x;
    newVec.y = y;
    newVec.z = z;
    return newVec;
}
Vec3 addVec3(Vec3 vecA, Vec3 vecB)
{
    Vec3 newVec;
    newVec.x = vecA.x + vecB.x;
    newVec.y = vecA.y + vecB.y;
    newVec.z = vecA.z + vecB.z;
    return newVec;
}