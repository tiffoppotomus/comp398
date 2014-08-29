//
//  main.cpp
//  HW1
//
//  Created by Tiff Sze on 8/27/14.
//  Copyright (c) 2014 Tiff Sze. All rights reserved.
//

#include <iostream>
#include <fstream>


using namespace std;

struct Node
{
    string text;
    Node *next;
};
//=========================================================
//=========================================================

int main()
{
    //Declarations of variables----------------------------
    short i=0;
    Node *headNode, *node1, *node2, *node3, *tailNode, *currentNode;
    
    //open file to read------------------------------------
    ifstream fin;
    
    string fileName = "ListOfBeyonceFilms.txt";
    string line;
    
    fin.clear();
    fin.open(fileName.c_str());
    

    if ( fin.fail() ) // if the file failed to open
    {
        cout << "ERROR! File called " << fileName << " failed to open." << endl;
        exit(-1);
    }

    
    //creating empty linked list----------------------------
    tailNode->next = NULL;
    currentNode = headNode;
    
    headNode->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = tailNode;
    
    //retrieve data from file-------------------------------
    getline(fin, line);
    
    while(fin)
    {
        cout << i << ". " << line << endl;
        
        if(currentNode->next!=NULL)
        {
            currentNode->text = line;
            currentNode = currentNode->next;
        }
        
        
        
        i++;
        getline(fin, line);
    }
    

    
    
    
    
    
    fin.close();

    return 0;
    
}//end main

//FUNCTIONS
