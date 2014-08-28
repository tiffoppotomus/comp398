//
//  main.cpp
//  HW1
//
//  Created by Tiff Sze on 8/27/14.
//  Copyright (c) 2014 Tiff Sze. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Node.cpp"

using namespace std;


int main()
{
    
    //=========================================================//
    //open and read from flat file database
    ifstream fin;
    
    string fileName = "StateAndAbb";
    string line;
    
    fin.clear();
    fin.open(fileName.c_str());
    

    if ( fin.fail() ) // if the file failed to open
    {
        cout << "ERROR! File called " << fileName << " failed to open." << endl;
        exit(-1);
    }
    
    
    getline(fin, line);
    short i=0;
    while(fin)
    {
        cout << i << ". " << line << endl;
        
        node listFromText(i,line);
        
        i++;
        
        
        getline(fin, line);
    }
    //=========================================================//

    
    
    
    
    //=========================================================//
    fin.close();
    
    
    return 0;
    
}//end main

//FUNCTIONS
