//
//  ShaderData.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__ShaderData__
#define __Assignment1__ShaderData__

#include <iostream>
#include <glfw3.h>
#include "Vec3.h"
#include "Vec4.h"


class ShaderData
{
private:
    
    Vec4 _uColorValue;
    Vec3 _uLightPosition;

    
    
public:
    
    Vec4 get_uColorValue();
    void set_uColorValue(Vec4 newColor);
    Vec3 get_uLightPosition();
    void set_uLightPosition(Vec3 newPosition);
    
    ShaderData(Vec4 newColor, Vec3 newPosition);
    ~ShaderData();
    
};

#endif /* defined(__Assignment1__ShaderData__) */
