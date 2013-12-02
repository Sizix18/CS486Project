//
//  Entity.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__Entity__
#define __Assignment1__Entity__

#include <iostream>
#include "VertexBuffer.h"
#include "Vec3.h"
#include <vector>

class Entity
{
private:
    
    VertexBuffer *_vertexBuffer;
    Vec3 _position;
    Vec3 _scale;
    Vec3 _rotation;
    
    Vec3 _velocity;
    Vec3 _scaleVelocity;
    Vec3 _rotationVelocity;
    
    Vec3 _eyeVec;
    Vec3 _upVec;
    
public:
    VertexBuffer *getVertexBuffer();
    void setVertexbuffer(VertexBuffer *newVertexBuffer);
    
    Vec3 getPosition();
    void setPosition(Vec3 newPosition);
    Vec3 getScale();
    void setScale(Vec3 newScale);
    Vec3 getRotation();
    void setRotation(Vec3 newRotation);
    Vec3 getVelocity();
    void setVelocity(Vec3 newVelocity);
    Vec3 getScaleVelocity();
    void setScaleVelocity(Vec3 newScaleVelocity);
    Vec3 getRotationVelocity();
    void setRotationVelocity(Vec3 newRotationVelocity);
    Vec3 getEyeVec();
    void setEyeVec(Vec3 newEyeVec);
    Vec3 getUpVec();
    void setUpVec(Vec3 newUpVec);
    Entity(VertexBuffer *vertexBuffer, Vec3 newPosition);
    ~Entity();
};
#endif /* defined(__Assignment1__Entity__) */
