#ifndef COUNTRY
#define COUNTRY

//#include "stdafx.h"
#include "Node.h"
#include <iostream>
#include <string>


class countryList
{
public:
    
	countryList();												// Default CTOR
    
	~countryList();												// DTOR
    
	void addToEndOfTheList(string newCountryName);				// add Node to the end of the list
	void searchNode();											// search for a country
	void printList();											// print the entire list to console
	void displayText();
    
	Node *head;													// head pointer
	Node *tail;													// tail pointer
	Node *currentNode;											// pointer of the current Node
    
};// class countryList

#endif