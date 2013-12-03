//
//  ShaderInterface.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/23/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__ShaderInterface__
#define __Assignment1__ShaderInterface__

#include <iostream>
#include "ShaderLoader.h"

class ShaderInterface
{
private:
    
    ShaderLoader *shader;
    GLint _aPositionVertex;
    GLint _aPositionNormal;
    GLint _uColor;
    GLint _uLightPosition;
    
    
    char* _vertexShaderString;
    char* _fragmentShaderString;
    
    char* loadTextFromFile(const char* file);
    
public:
  
    GLuint getProgramHandle();
    GLint get_aPositionVertex();
    GLint get_aPositionNormal();
    GLint get_uColor();
    GLint get_uLightPosition();
    ShaderInterface(const char* VS, const char* FS);
    ~ShaderInterface();
    
    
};

#endif /* defined(__Assignment1__ShaderInterface__) */
