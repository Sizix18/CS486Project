//
//  main.cpp
//  Assignment1
//
//  Created by Jeff Einspahr on 10/23/13.
//  Copyright (c) 2013 Jeff Einspahr. All rights reserved.
//
#include "ProgramManager.h"

int main (int argc, char** argv)
{
    ProgramManager *programManager = &ProgramManager::getProgramManager();
    programManager->runProgramLoop();
    ProgramManager::destroyProgramManager();

}