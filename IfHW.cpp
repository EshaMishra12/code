#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your marks.";
    cin >> a;
    if (a == 100)
    {
        cout << "excellent!!!!!";
    }
    if (a >= 90)
    {
        cout << "Good :)";
    }
    if (a >= 70)
    {
        cout << "Scope for Improvement";
    }
    if (a <= 50)
    {
        cout << "Fail;(";
    }
    return 0;
}