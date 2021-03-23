//Mackenzie Broughton
//January 31, 2019
//A minimal Dictionary program.
//Purpose: An interactive dictionary with the ability to add, delete, search, and list.

#ifndef DICTIONARY2_H
#define DICTIONARY2_H

#include<vector>
#include<string>
using namespace std;

void myAdd(vector<string>&, string);
void myDelete(vector<string>&, string);
void mySearch(vector<string>, string);
void myList(vector<string>);
void myExit();
bool linearSearch(const vector<string>, string, unsigned int&);

#endif
