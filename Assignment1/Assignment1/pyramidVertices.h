//
//  pyramidVertices.h
//  Assignment1
//
//  Created by Jeff Einspahr on 12/2/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//

#ifndef Assignment1_pyramidVertices_h
#define Assignment1_pyramidVertices_h
#include "VertexDataPosn.h"

VertexDataPosn pyramidVertices[] = {
        0.0f, 1.5f, 0.0f,   -1.0f, -1.0f, 1.0f,    1.0f, -1.0f, 1.0f,    // (front)
        0.0f, 1.5f, 0.0f,    1.0f, -1.0f, 1.0f,    1.0f, -1.0f,-1.0f,    // (right side)
        0.0f, 1.5f, 0.0f,    1.0f, -1.0f,-1.0f,   -1.0f, -1.0f,-1.0f,    // (back)
        0.0f, 1.5f, 0.0f,   -1.0f, -1.0f,-1.0f,   -1.0f, -1.0f, 1.0f,    // (left side)
        -1.0f,-1.0f, 1.0f,    1.0f, -1.0f, -1.0f,   1.0f, -1.0f,1.0f,    // (bottom)
        -1.0f,-1.0f, 1.0f,   -1.0f, -1.0f,-1.0f,    1.0f,-1.0f, -1.0f,
};

#endif
