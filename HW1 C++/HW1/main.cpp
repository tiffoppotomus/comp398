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
    Node *h,*t,*currentNode;
    
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

    string x =  "";
    currentNode = new Node;
    currentNode->text = x;
    h = currentNode;
    t = currentNode;
    
    for(short y = 0; y<5; y++)
    {
        currentNode = new Node;
        currentNode->text = x;
        t->next = currentNode;
        t = t->next;
    }
    
    currentNode = h;
    
    //retrieve data from file-------------------------------
    getline(fin, line);
    
    while(fin)
    {
        
        if(currentNode->next != t->next)
        {
            currentNode->text = line;
            
            cout << currentNode->text << endl;
            
            currentNode = currentNode->next;
        }
        
        else
        {
            currentNode = new Node;
            currentNode->text = line;
            
            cout << currentNode->text << endl;
            
            t->next = currentNode;
            t = t->next;
        }
        
        i++;
        getline(fin, line);
        
        
    }
    
    fin.close();

    return 0;
    
}//end main

//FUNCTIONS
