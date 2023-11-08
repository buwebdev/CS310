
#include <iostream>
#include <iomanip>

using namespace std;

const double OPTION_1_DOWN_PAY = 5000;
const double OPTION_1_BOOK_DEL_PAY = 20000;

const double OPTION_2_ROYALTY_RATE = 0.125;
const double OPTION_3_ROYALTY_RATE_1 = 0.10;
const double OPTION_3_ROYALTY_RATE_2 = 0.14;

int main()
{
    int numberOfCopiesSold;
    double netPriceOfABook;

    int bestOption = 0;
    double bestRoyalty = 0;

    double royaltyOption1;
    double royaltyOption2;
    double royaltyOption3;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Enter the num of copies sold: ";
    cin >> numberOfCopiesSold;
    cout << endl;

    cout << "Enter the net price of one book: ";
    cin >> netPriceOfABook;
    cout << endl;

    royaltyOption1 = OPTION_1_DOWN_PAY + OPTION_1_BOOK_DEL_PAY;
    royaltyOption2 = numberOfCopiesSold * netPriceOfABook * OPTION_2_ROYALTY_RATE;

    if (numberOfCopiesSold <= 4000)
        royaltyOption3 = numberOfCopiesSold * netPriceOfABook * OPTION_3_ROYALTY_RATE_1;
    else
        royaltyOption3 = 4000 * netPriceOfABook * OPTION_3_ROYALTY_RATE_1
        + (numberOfCopiesSold - 4000) * netPriceOfABook * OPTION_3_ROYALTY_RATE_2;
    bestOption = 1;
    bestRoyalty = royaltyOption1;

    if (bestRoyalty < royaltyOption2)
    {
        bestOption = 2;
        bestRoyalty = royaltyOption2;
    }

    if (bestRoyalty < royaltyOption3)
    {
        bestOption = 3;
        bestRoyalty = royaltyOption3;
    }

    if (bestOption == 1)
    {
        if (royaltyOption1 == royaltyOption2)
            if (royaltyOption1 == royaltyOption3)
                cout << "All three options are the same and the royalty is: "
                << bestRoyalty << endl;
            else
                cout << "Options 1 and 2 are the same and give the best royalty, which is: "
                << bestRoyalty << endl;
        else if (royaltyOption1 == royaltyOption3)
            cout << "Options 1 and 3 are the same and give the best royalty, which is: "
            << bestRoyalty << endl;
        else
            cout << "Option 1 is the best and the royalty is: "
            << bestRoyalty << endl;
    }
    else if (bestOption == 2)
    {
        if (royaltyOption2 == royaltyOption3)
            cout << "Options 2 and 3 are the same and give the best royalty, which is: "
            << bestRoyalty << endl;
        else
            cout << "Option 2 is the best and the royalty is: "
            << bestRoyalty << endl;
    }
    else
        cout << "Option 3 is the best and the royalty is: "
        << bestRoyalty << endl;

    cout << "Royalty option1: " << royaltyOption1 << endl;
    cout << "Royalty option2: " << royaltyOption2 << endl;
    cout << "Royalty option3: " << royaltyOption3 << endl;

    return 0;
}