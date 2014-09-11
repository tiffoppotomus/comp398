//
//  main.cpp
//  hw04
//
//  Created by Tiff Sze on 9/9/14.
//  Copyright (c) 2014 Tiff Sze. All rights reserved.


/*
 Summary:  This file will convert a Mardown file to html.
 */

#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;


int main()
{
    //ifstream and ofstream creates a pathway to files that will
    //be designated later in main().
    ifstream in_file;
    ofstream out_file;
    
    //Variable declarations:
    //file_name for the file we want to read from
    //line_in_file for each line in the file_name
    //file_out_name for the file we want to write to
    //i to increment each line in the file reading
    string file_name;
    string line_in_file;
    string file_out_name = "output.html";
    short i = 0;
    
    
    //The following cout and cin are to have user input decide what
    //files and file names are needed
    cout << "Please enter a file name you wish to read: " << endl;
    cin >> file_name;

    
    //opens the files using the pathways that were created
    in_file.open(file_name.c_str());
    out_file.open(file_out_name.c_str());
    
    
    //if the files fail to open
    if (in_file.fail() and out_file.fail())
    {
        cout << "Error! Files failed to open." << endl;
        exit(-1);
    }
    
    
    //setting up the html document we are writing
    out_file << "<!DOCTYPE html>" << endl << "<html lang = " << "en" << ">" << endl;
    
    
    
    //when the files are open to read and write to
    getline(in_file, line_in_file);
    while(in_file)
    {
        short n = line_in_file.length();
        short header = 0;
        short blockquote = 0;
        
        
        for (short x = 0; x < n; x++)
        {
            if (line_in_file[x] == '#')
            {
                header++;
            }
            
            if (line_in_file[x] == '>')
            {
                blockquote++;
            }
            
            
            
            
        }//end for
        
        
        if(header != 0)
        {
            line_in_file.erase(0,header);
            out_file << "<h" << header << ">" << line_in_file << "</h" << header << ">" << endl;
        }//end if header
        
        
        
        if(blockquote !=0)
        {
            line_in_file.erase(0, blockquote);
            
            for( short y = blockquote; y>0; y--)
            {
                out_file << "<blockquote>";
            }
            
            //if there is a header nested in the
            
            if(header != 0)
            {
                line_in_file.erase(0,header);
                out_file << "<h" << header << ">" << line_in_file << "</h" << header << ">" << endl;
            }//end if header
            
            else
            {
                out_file <<"<p>"<< line_in_file <<"</p>";
            }
            
            for( short y = blockquote; y>0; y--)
            {
                out_file << "</blockquote>";
            }
            
        }//end if blockquote

        i++;
        getline(in_file, line_in_file);
    
    }//end while
    
    
    //closes the pathways that were used to access the files
    in_file.close();
    out_file.close();
    
    return 0;
}//end main()

