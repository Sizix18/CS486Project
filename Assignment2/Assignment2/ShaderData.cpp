//
//  ShaderData.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#include "ShaderData.h"
Vec4 ShaderData::get_uColorValue()
{
    return _uColorValue;
}
void ShaderData::set_uColorValue(Vec4 newColor)
{
    _uColorValue = newColor;
}
Vec3 ShaderData::get_uLightPosition()
{
    return _uLightPosition;
}
void ShaderData::set_uLightPosition(Vec3 newPosition)
{
    _uLightPosition = newPosition;
}
ShaderData::ShaderData(Vec4 newColor, Vec3 newPosition):
_uColorValue(newColor), _uLightPosition(newPosition)
{
    
}
ShaderData::~ShaderData()
{
    
}