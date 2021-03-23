//Mackenzie Broughton
//January 31, 2019
//A minimal Dictionary program.
//Purpose: An interactive dictionary with the ability to add, delete, search, and list.

#include"./dictionary2.h"
#include<iostream>
using namespace std;

int main(){
	vector<string> dictionary;
	string command, aWord;

	cout << "\nDictionary" << endl;

	do{
		cout << ">>>> ";
		cin >> command;

		if(command == "ADD"){
			cin >> aWord;
			myAdd(dictionary, aWord);
		}

		else if(command == "DELETE"){
			cin >> aWord;
			myDelete(dictionary, aWord);
		}

		else if(command == "LIST"){
			myList(dictionary);
		}

		else if(command == "SEARCH"){
			cin >> aWord;
			mySearch(dictionary, aWord);
		}

		else if(command == "EXIT"){
			myExit();
		}

		else{
			cout << "Invalid command and/or word" << endl;
		}

	}while(command != "EXIT");

	return 0;
}
