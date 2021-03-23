//Mackenzie Broughton
//January 31, 2019
//A minimal Dictionary program
//Purpose: An interactive dictionary with the ability to add, delete, search, and list.
#include <iostream>
#include <string>
#include <vector>
#include "dictionary2.h"
using namespace std;

//Function Purpose: To add a word to the dictionary. (Checks whether the word has already been added before adding it).
void myAdd(vector<string> &dictionary, string aWord){
   unsigned int count;
   
   if(linearSearch(dictionary, aWord, count)){
      cout << aWord << " has already been added." << endl;
   }
   
   else{
      dictionary.push_back(aWord);
      cout << aWord << " has been added." << endl;
   }
}

//Function Purpose: To delete a word from the dictionary (checks whether the word is in the dictionary first).
void myDelete(vector<string>&dictionary, string aWord){
   unsigned int count;
   
   if(linearSearch(dictionary, aWord, count)){
      dictionary.erase(dictionary.begin() + (count - 1));
      
      cout << aWord << " has been deleted." << endl;
   }
   else{
      cout << "Word not found." << endl;
   }
}

//Function Purpose: To search for a word within the dictionary.
void mySearch(vector<string>dictionary, string aWord){
   unsigned int count;
   
   if(linearSearch(dictionary, aWord, count)){
      cout << aWord << " was found. " << count << " comparison(s)." << endl;
   }
   
   else{
      cout << aWord << " was not found." << endl;
   }
}

//Function purpose: To display the contents of the dictionary.
void myList(vector<string>dictionary){
   for(unsigned int i = 0; i < dictionary.size(); i++){
      cout << dictionary[i] << endl;
   }
}

//Function purpose: To exit the dictionary interface.
void myExit(){
   cout << "bye - bye" << endl;
}

//Function purpose: Searches the dictionary array to determine if a word is in it.
bool linearSearch(const vector<string>dictionary, string aWord, unsigned int &count){
   count = 0;
   for(unsigned int i = 0; i < dictionary.size(); i++){
      count++;
      if(dictionary[i] == aWord){
	 return true;
      }
   }
   return false;
}
