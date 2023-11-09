
/*
Johnson 5000
Miller 4000
Duffy 6000
Robinson 2500
Ashtony 1800
*/
#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int sumVotes(int list[], int size);
int winnerIndex(int list[], int size);

int main()
{
    string candidates[5];
    int votes[5] = { 0 };
    int totalVotes;
    int i;

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Enter candidate's name and the votes received by "
        << "the candidate." << endl;

    for (i = 0; i < 5; i++)
        cin >> candidates[i] >> votes[i];

    totalVotes = sumVotes(votes, 5);

    cout << "Candidate    Votes Received   % of Total Votes" << endl;
    for (i = 0; i < 5; i++)
        cout << left << setw(10) << candidates[i]
        << right << " " << setw(10) << votes[i] << "   " << setw(15)
        << (static_cast<double>(votes[i]) / static_cast<double>(totalVotes)) * 100
        << endl;

    cout << "Total            " << totalVotes << endl;

    cout << "The Winner of the Election is "
        << candidates[winnerIndex(votes, 5)]
        << "." << endl;

    return 0;
}

int sumVotes(int list[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum = sum + list[i];

    return sum;
}

int winnerIndex(int list[], int size)
{
    int winInd = 0;

    for (int i = 0; i < size; i++)
        if (list[i] > list[winInd])
            winInd = i;

    return winInd;
}