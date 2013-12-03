//
//  ResourceManager.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__ResourceManager__
#define __Assignment1__ResourceManager__

#include <iostream>
#include <vector>
#define GLFW_INCLUDE_GLU

#include "ShaderInterface.h"
#include "VertexBuffer.h"
#include "ShaderData.h"


class ResourceManager
{
private:
    std::vector<ShaderInterface*> *_shaderArray;
    std::vector<VertexBuffer*> *_vertexBufferArray;
    std::vector<ShaderData*> *_shaderData;
    //ShaderData *shaderData;
    
    ResourceManager();
    ~ResourceManager();
public:
    std::vector<ShaderInterface*> *getShaderArray();
    std::vector<VertexBuffer*> *getVertexBufferArray();
    static ResourceManager& getResourceManager();
    static void destroyResourceManager();
};
#endif /* defined(__Assignment1__ResourceManager__) */
