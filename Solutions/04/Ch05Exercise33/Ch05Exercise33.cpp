/*
    Students Name: Professor Krasso
    Date: 10/31/2023
    File Name: Ch05Exercise33.cpp
*/

#include <iostream>;
#include <conio.h>;

using namespace std; 

int main()
{
    // variables 
    int minsToPrepareFirstDish; 
    int addedTimeToPrepareSecondDish; 
    int minsToPrepareEntireMeal; 

    // variables to manage the sequence 
    int current; 
    int next; 
    int total; 
    int count; 

    // Display the welcome message
    cout << "\n\n  Welcome to the Birthday Dish Calculator!" << endl;

    // Prompt the user to enter the number of minutes to prepare the first dish
    cout << "\n  Enter the number of minutes to pepare the first dish: ";
    cin  >> minsToPrepareFirstDish;
    cout << endl;

    // Prompt the user to enter the number of minutes to preapre the second dish 
    cout << "  Enter how much additional time is needed to prepare the second dish: "; 
    cin  >> addedTimeToPrepareSecondDish; 
    cout << endl;

    // Prompt the user to enter the number of minutes to prepare the entire meal
    cout << "  Enter the number of minutes to pepare the entire meal: "; 
    cin  >> minsToPrepareEntireMeal;
    cout << endl;    

    current = minsToPrepareFirstDish; // initailize the current variable with the time it takes to prepare one dish
    next = current + addedTimeToPrepareSecondDish; // initialize the next variable with the next value in the sequence 
    total = current + next; // initialize the total variable with a running total of the first two numbers in the sequence 
    count = 0; // initialize the count to 0; 

    if (current > minsToPrepareEntireMeal) 
    {
        // Display the results. 
        cout << "\n  -- RESULTS --";
        cout << "\n  Based on the prep time of " << minsToPrepareEntireMeal << " mins, Bianca can prepare " << count << " dishes." << endl;
    }
    else if (current < minsToPrepareEntireMeal && total > minsToPrepareEntireMeal)
    {
        count = 1; // set the count to 1 

        // Display the results. 
        cout << "\n  -- RESULTS --";
        cout << "\n  Based on the prep time of " << minsToPrepareEntireMeal << " mins, Bianca can prepare " << count << " dish." << endl;
    }
    else 
    {
        count = 1; // set the count to 1 

        // Calculate the current, next, and total values in the sequence while the total minutes is less than or equal 
        // to the total time it takes to prepare a meal 
        do
        {
            current = next; // set the current value to the next number in the sequence
            next = current + addedTimeToPrepareSecondDish; // calculuate the next number in the sequence 
            total = total + next; // update the running total by adding the total and next number in the sequence 
            count++; // increase the meal count by one
        } while (total <= minsToPrepareEntireMeal); 

        // Display the results. 
        cout << "\n  -- RESULTS --";
        cout << "\n  Based on the prep time of " << minsToPrepareEntireMeal << " mins, Bianca can prepare " << count << " dishes." << endl;
    }

    cout << "\n\n  Press any key to continue ..."; // display exit message 

    _getch(); // halt processing 

    return 0; // system exit code
}
