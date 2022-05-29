#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any  no. :";
    cin >> num;
    if (num % 3 == 0 && num % 4 == 0 && num % 8 == 0)
    {
        cout << "The no. is divisible by 3,4 and 8.";
    }
    else
    {
        cout << "The no. is not divisible by 3,4 and 8.";
    }

    return 0;
}