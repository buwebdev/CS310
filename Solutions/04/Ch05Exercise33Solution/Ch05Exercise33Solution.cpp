
#include <iostream> 

using namespace std;

int main()
{
    int a;
    int b;
    int t;
    int numOfDishes = 0;
    int timeForTheNextDish;
    int sum;

    cout << "Enter the number of minutes to prepare first dish: ";
    cin >> a;
    cout << endl;

    cout << "Enter how many more minutes to prepare the next dish: ";
    cin >> b;
    cout << endl;

    cout << "Enter the total time (in minutes) to prepare all the dishes: ";
    cin >> t;
    cout << endl;

    timeForTheNextDish = a;
    sum = a;

    while (sum <= t)
    {
        numOfDishes++;
        timeForTheNextDish = timeForTheNextDish + b;
        sum = sum + timeForTheNextDish;
    }

    cout << "In " << t << " minute(s) Bianca can prepare "
        << numOfDishes << " dishes." << endl;

    return 0;
}