//#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

#include "country.h"

using namespace std;

// -----------------------------------------------------------------------
countryList::countryList()						//CTOR
{
	currentNode = new Node;						// head and tail pointers both point to an empty node
	currentNode->countryName = "NULL";
	currentNode->p = 0;
	head = currentNode;
	tail = currentNode;
}//CTOR


// -----------------------------------------------------------------------
countryList::~countryList()						// DTOR
{
	Node *front, *back;							// pointers to node on the front, then delete the node on the back
	front = head;
	while (front->p != 0)
	{
		back = front;
		delete back;
		front = front->p;
	}
}


// -----------------------------------------------------------------------
void countryList::addToEndOfTheList(string newCountryName)
// PRE: the linked list
// POST: the linked list with node added to the end
{
	Node* temp = new Node;					// temp node of the newly added country
	temp->countryName = newCountryName;
	temp->p = 0;
    
	tail->p = temp;							// add the new node to tail
	tail = temp;
}


// -----------------------------------------------------------------------
void countryList::searchNode()
// PRE: the linked list
// POST: a string telling whether a country is in the list or not
{
	string myCountryName;
	cout << "Enter the country you're searching for: ",
    cin >> myCountryName;
    
	Node* temp = head->p;					// assign temp note to the one after buffer node
    
	bool Found = false;						// boolean variable of whether the country is found, default to false
    
	while (temp->p != 0)					// while not the end of the list
	{
		if (temp->countryName == myCountryName)						// if found
		{
			cout << "Yayyy! Got it: " << myCountryName << endl;
			Found = true;
			break;
		}
		temp = temp->p;												// access to the next node in the linked list
	}
	
	if (Found == false)												// if not found
	{
		cout << "Nahhh, " << myCountryName << "is not in the list" << endl;
	}
}


// -----------------------------------------------------------------------
void countryList::printList()				// print out the entire list
// PRE: none
// POST: console of the country names
{
	Node* temp = head->p;
    
	while (temp->p != 0)
	{
		cout << temp->countryName << endl;
		temp = temp->p;
	}
}


// -----------------------------------------------------------------------
void countryList::displayText()				// display the list in plain text form as .txt
// PRE: none
// POST: txt file of the list
{
	ofstream FOUT;
	FOUT.open("output.txt");
	Node* temp = head->p;
    
	while (temp->p != 0)
	{
		FOUT << temp->countryName << endl;
		temp = temp->p;
	}
    
	FOUT.close();
}