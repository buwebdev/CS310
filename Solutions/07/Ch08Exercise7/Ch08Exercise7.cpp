/*
    Students Name: Professor Krasso
    Date: 11/08/2023
    File Name: Ch08Exercise7.cpp
*/

#include <iostream>
#include <string>; 
#include <conio.h>; 
#include <iomanip>; 

using namespace std; 

// Constants 
const int ARRAY_SIZE = 5; 

// Variables 
string candidate; 
int votes; 
string candidateList[ARRAY_SIZE];
int voteList[ARRAY_SIZE];

// Prototypes 
void addCandidate(string str, int i); 
void addVotes(int v, int k);
void displayResults();
int totalVotes();
double votePercent(double val); 

int main()
{
    cout << "\n\n  Welcome to Voter Registration!" << endl; // Display welcome message 

    cout << "\n  This program will help determine who won the election." << endl; // Display instructions 

    int index = 0; // index variable to control the iterations of the while loop

    while (index < ARRAY_SIZE)
    {
        // Prompt the user to enter a candidates name
        cout << "\n  Enter the candidate's name: ";
        cin >> candidate;
        cout << endl;

        addCandidate(candidate, index); // call the add candidate function 

        // Prompt the user to enter the votes received 
        cout << "  Enter the number of votes received: ";
        cin >> votes;
        cout << endl;

        addVotes(votes, index); // call the add votes function

        index++; // increment the index variable by one
    }

    displayResults(); // Call the display results function 

    cout << "\n\n  Press any key to continue ..."; // display an exit message 

    _getch(); // halt processing 

    return 0; // system exit code
}

// Function to add a candidate to a string array 
void addCandidate(string str, int i)
{
    candidateList[i] = str; // add the candidate to the candidateList array
}

// Function to add the number of votes to an int array
void addVotes(int v, int k) 
{
    voteList[k] = v; // add votes to the voteList array
}

// Function to get calculate the total number of votes in the election 
int totalVotes()
{
    int total = 0; // variable to hold a running total 

    // For loop to iterate over the voteList array 
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        total += voteList[i];
    }

    return total; // return the total votes 
}

// Function to calculate the % of total votes
double votePercent(double val)
{
    double voteTotal = totalVotes(); // call the totalVotes() function to get the vote total

    double vp = (val / voteTotal) * 100; // calculate the % of total votes

    return vp; // return the vote percentage 
}

// Function to display who won the election 
void displayResults()
{
    int highestVotes = 0; // variable to hold the highest votes
    string winner; // variable to hold the winners name 

    // Display the header of the matrix 
    cout << setw(7) << "  Candidate" << setw(5) << "\t\t Votes Received" << setw(5) << "\t\t % of Total Votes" << endl; 

    // Assume the first candidate is the winner 
    highestVotes = voteList[0];
    winner = candidateList[0]; 

    // Iterate over the size of the parallel arrays
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // If the current highest votes is less than the current 
        // element in the voteList array, it means the current 
        // candidate is the winner 
        if (highestVotes < voteList[i])
        {
            highestVotes = voteList[i]; // set the highest votes to the current element in the array
            winner = candidateList[i]; // set the winner to the current element in the array
        }

        // Display the table row 
        cout << "  " << candidateList[i] << setw(5) << "\t\t " << voteList[i] << setw(5) << "\t\t\t " << fixed << setprecision(2) << votePercent(voteList[i]) << endl;
    }

    // Display the total row 
    cout << "  Total" << setw(5) << "\t\t " << totalVotes() << endl; 

    // Display the winner 
    cout << "\n  The Winner of the Election is " << winner << ".";
}


