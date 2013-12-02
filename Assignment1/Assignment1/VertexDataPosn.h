//
//  VertexDataPosn.h
//  Assignment1
//
//  Created by Jeff Einspahr on 11/24/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef __Assignment1__VertexDataPosn__
#define __Assignment1__VertexDataPosn__

#include <iostream>
#include "Vec3.h"

typedef struct
{
    Vec3 positionCoordinates;
    
}VertexDataPosn;

typedef struct
{
    Vec3 positionCoordinates;
    Vec3 normalCoordinates;
    
}VertexDataPosnNorm;

#endif /* defined(__Assignment1__VertexDataPosn__) */
