/*
    Students Name: Professor Krasso
    Date: 11/8/2023
    File Name: Ch07Exercise4.cpp
*/

#include <iostream>;
#include <conio.h>; 
#include <string>; 

using namespace std; 

// Variables
string phrase;

// Prototypes 
bool isVowel(char c); 
string removeVowels(string str); 

int main()
{
    cout << "\n\n  Welcome to the Vowels App!" << endl; // display welcome message 

    // Prompt the user to enter a phrase 
    cout << "\n  Enter a phrase to have the vowels removed: ";
    cin >> phrase;
    cout << endl;

    // Display the converted string without vowels 
    cout << "  The word <" << phrase << "> without vowels is " << removeVowels(phrase) << endl; 

    cout << "\n\n  Press any key to continue ..."; 

    _getch(); // halt processing 

    return 0; // system exit code
}

/*
    Function to determine if a character is a vowel 
*/
bool isVowel(char c)
{
    // Switch statement on the c argument 
    switch (c)
    {
        case 'a':
        case 'A':
        case 'E': 
        case 'e':
        case 'I': 
        case 'i': 
        case 'O':
        case 'o': 
        case 'U': 
        case 'u':
            return true; // if the character is aeiou return true
        default: 
            return false; // otherwise, return false 
    }
}

/* 
    Function to remove the vowels in a string 
*/
string removeVowels(string str)
{
    string strWithoutVowels; // string variable to hold the characters of a string without vowels 

    // Loop over the str argument
    for (int i = 0; i < str.length(); i++)
    {
        // Call the isVowel() function to determine if the character is not a vowel 
        if (!isVowel(str[i]))
        {
            // if the character is not a vowel, append it to the variable 
            strWithoutVowels.append(1, str[i]);
        }
    }

    return strWithoutVowels; // return the updated string without vowels 
}
