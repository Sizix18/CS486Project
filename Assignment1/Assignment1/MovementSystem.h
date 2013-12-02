//
//  MovementSystem.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/25/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__MovementSystem__
#define __Assignment1__MovementSystem__

#include <iostream>
#include "Vec3.h"
#include <glfw3.h>
#include "Entity.h"

class MovementSystem
{
private:
    MovementSystem();
    ~MovementSystem();
public:
    void update(std::vector<Entity*> *entityArray);
    
    static MovementSystem& getMovementSystem();
    static void destroyMovementSystem();
};
#endif /* defined(__Assignment1__MovementSystem__) */
