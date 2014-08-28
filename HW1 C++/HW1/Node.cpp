//
//  Node.cpp
//  HW1
//
//  Created by Tiff Sze on 8/27/14.
//  Copyright (c) 2014 Tiff Sze. All rights reserved.
//

#include <iostream>
#include "Node.h"


node::node(short x, string line)
{
    this->currentLine = 0;
    this->lineContent = line;
    this->next = x+1;
    
}
