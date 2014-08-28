//
//  Node.h
//  HW1
//
//  Created by Tiff Sze on 8/27/14.
//  Copyright (c) 2014 Tiff Sze. All rights reserved.
//

#ifndef __HW1__Node__
#define __HW1__Node__

#include <iostream>


using namespace std;

class node
{
public:
    node(short, string);  //CTOR
    
private:
    string lineContent;
    short next;
    short currentLine;
    
    
};

#endif /* defined(__HW1__Node__) */
