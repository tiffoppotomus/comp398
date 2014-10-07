// node.h -- these are the NODES on the list
#ifndef a_Node
#define a_Node

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// NODE for ONE Node (country)
typedef
struct aNode
{
	string countryName;	// name of the country
    
	struct aNode  *p;	// pointer to next node in the list
    
}Node;

#endif