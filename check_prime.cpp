#include <iostream>
using namespace std;
int main()
{
    int number, exit_button;
    while (exit_button != 0)
    {

        cout << "\nenter the number to check if the number is prime or not:";
        cin >> number;
        cin.ignore();
        bool isPrime = true;

        if (number <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i <= number / 2; i++)
            {
                if (number % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            cout << number << " is prime number" << endl;
        }
        else
        {
            cout << number << " is not prime number" << endl;
        }
        cout << "enter 0 to exit or any other digit to continue...." << endl;
        cin >> exit_button;
        cin.ignore();
    }
    cout << "thank you for using this awesome program." << endl;
    return 0;
}