/**
Description:This function asks for a string prompt and a character and then it counts how many times the character was used in the string and returns that number.
Filename:main.cpp
Author:Lucas Sowers
Date:10/20/18
*/

#include<iostream>
#include<string>


using namespace std;


string get_string(string prompt);
int char_count(string, char);
char get_char (string prompt);

// Promots user for all necesary input then returns the results
int main()
{
    string str = get_string("Please enter a sentence: ");
    char c = get_char("Please enter a character you would like to count in the previously entered sentence: ");
    
    cout << "The character you picked is: " << c << endl;
    cout << "It appeared: " << char_count(str, c) << " time(s)";


   return 0;
}

// This gets the input for the string
string get_string(string prompt)
{
    string value;
    cout << prompt;
    getline(cin,value);
    return value;
}

//This gets the input for the character
char get_char(string prompt)
{
    char c;
    cout << prompt;
    cin >> c;
    return c;
}

//This counts the character in the string after converting all the characters to lower case for an accurate read
int char_count(string str, char c)
{
   int count = 0;
   for (int i = 0; i < str.length(); i++)
   {
      char character = tolower(str.at(i));
      if(character == c)
      {
         count++;
      }
   }
   return count;
}
