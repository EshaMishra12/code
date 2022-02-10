#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter your age.";
    cin >> a;
    if (a == 18)
    {
        cout << "You are accepted to vote";
    }
    else if (a >= 25)
    {
        cout << "enter your DOB.";
        cin >> b;
        cout << "You are eligible to vote";
    }
    else if (a >= 16)
    {
        cout << "You Cant vote.";
    }
    else
    {
        cout << "go back home Tata";
    }
    return 0;
}
