//
//  ShaderLoader.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/23/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__ShaderLoader__
#define __Assignment1__ShaderLoader__

#include <iostream>
#include <glfw3.h>

class ShaderLoader {
private:
    
    GLuint _programHandle;
    GLuint compileShader(GLenum shader, const char* source);
    
public:
    GLuint getProgramHandle();
    ShaderLoader(const char* sourceVS, const char* sourceFS);
    ~ShaderLoader();
    
};
#endif /* defined(__Assignment1__ShaderLoader__) */
