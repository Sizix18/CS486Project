//
//  Entity.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "Entity.h"

VertexBuffer *Entity::getVertexBuffer()
{
    return _vertexBuffer;
}
void Entity::setVertexbuffer(VertexBuffer *newVertexBuffer)
{
    _vertexBuffer = newVertexBuffer;
}

Vec3 Entity::getPosition()
{
    return _position;
}
void Entity::setPosition(Vec3 newPosition)
{
    _position = newPosition;
}
Vec3 Entity::getScale()
{
    return _scale;
}
void Entity::setScale(Vec3 newScale)
{
    _scale = newScale;
}
Vec3 Entity::getRotation()
{
    return _rotation;
}
void Entity::setRotation(Vec3 newRotation)
{
    _rotation = newRotation;
}
Vec3 Entity::getVelocity()
{
    return _velocity;
}
void Entity::setVelocity(Vec3 newVelocity)
{
    _velocity = newVelocity;
}
Vec3 Entity::getScaleVelocity()
{
    return _scaleVelocity;
}
void Entity::setScaleVelocity(Vec3 newScaleVelocity)
{
    _scaleVelocity = newScaleVelocity;
}
Vec3 Entity::getRotationVelocity()
{
    return _rotationVelocity;
}
void Entity::setRotationVelocity(Vec3 newRotationVelocity)
{
    _rotationVelocity = newRotationVelocity;
}
Vec3 Entity::getEyeVec()
{
    return _eyeVec;
}
void Entity::setEyeVec(Vec3 newEyeVec)
{
    _eyeVec = newEyeVec;
}
Vec3 Entity::getUpVec()
{
    return _upVec;
}
void Entity::setUpVec(Vec3 newUpVec)
{
    _upVec = newUpVec;
}

Entity::Entity(VertexBuffer *vertexBuffer, Vec3 newPosition):
_vertexBuffer(vertexBuffer), _position(newPosition), _scale(makeVec3(1.0f, 1.0f, 1.0f)), _rotation(makeVec3(0.0f, 0.0f, 0.0f)), _velocity(makeVec3(0.0f, 0.0f, 0.0f)), _scaleVelocity(makeVec3(0.0f, 0.0f, 0.0f)), _rotationVelocity(makeVec3(0.0f, 0.0f, 0.0f)), _eyeVec(makeVec3(0.0f, 0.0f, 0.0f)), _upVec(makeVec3(0.0f, 1.0f, 0.0f))
{
}

Entity::~Entity()
{
    
}
