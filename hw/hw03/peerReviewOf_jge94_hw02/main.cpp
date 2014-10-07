// main.cpp : Defines the entry point for the console application.
//

// Programmer: Jinnan Ge
// Date: 08/28/2014

// Driver program

// Summary:
//		This program creates an empty list of countries, ask the user to add a country to the end of
//		the list, populates the list from a .txt file, and displays the plain text form of the list.

//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "country.h"

using namespace std;

int main()
{
    
	string line;
	ifstream myfile("countries.txt");				    // INPUT file: file containing the country info
    
	countryList myCountryList;							// create an empty list
    
	string newCountryName;								// add to the end of the list
	cout << "Enter the country to add to the end of the list: ",
    cin >> newCountryName;
	cout << endl;
    
	myCountryList.addToEndOfTheList(newCountryName);
    
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			myCountryList.addToEndOfTheList(line);		// populate from plain text
		}
		myfile.close();
	}
    
	else
	{
		cout << "Unable to open file" << endl;
		exit(-1);
	}
    
	myCountryList.searchNode();							// search the list
    
	cout << endl;
	cout << "		Rank of richest countries in the world" << endl;
	myCountryList.printList();							// print to console the list
	myCountryList.displayText();						// display plain text form of the list
    
	system("PAUSE");
	return 0;
}