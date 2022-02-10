#include <iostream>
using namespace std;
int main()
{
    int a, b = 2;
    cout << "Enter a number ";
    cin >> a;
    if (b%a == 0)
    {
        cout << "number is prime number.";
    }
    else
    {
        cout << "Number is not prime";
    }
    return 0;
}