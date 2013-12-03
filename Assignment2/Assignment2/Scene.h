//
//  Scene.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/25/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__Scene__
#define __Assignment1__Scene__

#include <iostream>
#include "Entity.h"
#include <vector>


class Scene
{
private:
    
    std::vector<Entity *> *_children;
    
    
public:
    
    std::vector<Entity*> *getChildren();
    
    Scene();
    ~Scene();
    
    
    
};
#endif /* defined(__Assignment1__Scene__) */
