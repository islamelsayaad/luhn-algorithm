#include <iostream>
using namespace std;

int validator(string &input);

int main()
{
    string input;

    cout << "\n*****************************************************\n\n";
    cout << "Enter your credit card number: ";
    cin >> input;

    if (validator(input) == 0)
    {

        cout << "This is a valid card";
    }
    else
    {
        cout << "This is not valid card";
    }

    cout << "\n\n*****************************************************";

    return 0;
}

int validator(string &input)
{
    int sum = 0;
    bool isSecond = false;

    for (int i = input.length() - 1; i >= 0; i--)
    {

        int digit = input[i] - '0';
        if (isSecond == true)
        {

            digit *= 2;

            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit;
        isSecond = !isSecond;
    }

    return (sum % 10);
}