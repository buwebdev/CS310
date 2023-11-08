
#include <iostream> 
#include <string>

using namespace std;

void removeVowels(string& str);
bool isVowel(char ch);

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;
    cout << endl;

    cout << "Before removing vowels: " << str << endl;

    removeVowels(str);

    cout << "Afer removing vowels: " << str << endl;

    return 0;
}

void removeVowels(string& str)
{
    int len = str.length();

    int index = 0;

    while (index < len)
    {
        if (isVowel(str[index]))
        {
            str = str.substr(0, index) + str.substr(index + 1, str.length());
            len = str.length();
        }
        else
            index++;
    }
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return true;
    default:
        return false;
    }
}