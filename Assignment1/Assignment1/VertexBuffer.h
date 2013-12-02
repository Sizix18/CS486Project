//
//  VertexBuffer.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/23/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__VertexBuffer__
#define __Assignment1__VertexBuffer__

#include <iostream>
#include <glfw3.h>
#include "ShaderInterface.h"
#include "ShaderData.h"


class VertexBuffer{
    
private:
    GLuint _vertexBufferID;
    ShaderInterface *_shader;
    ShaderData *_shaderData;
    
    GLenum _mode;
    GLsizei _count;
    GLsizei _stride;
    GLvoid *_positionOffset;
    GLvoid *_normalOffset;
    
    

public:
    GLuint getVertexBufferID();
    ShaderInterface *getShader();
    ShaderData *getShaderData();
    
    VertexBuffer(const GLvoid *data, GLsizeiptr size, GLenum mode, GLsizei count, GLsizei stride, ShaderInterface *shader, ShaderData *shaderData, GLvoid *positionOffset, GLvoid *normalOffset);
    ~VertexBuffer();
    void configureVertexAttributes();
    void renderVertexBuffer();
};

#endif /* defined(__Assignment1__VertexBuffer__) */
