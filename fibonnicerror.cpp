#include<iostream>
using namespace std;

int main()
{

    int n,a = 0,b = 1,c,fib = 0;
    cout << "Enter the value for :";
    cin >> n;
    cout << "0 1 ";
    do
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        n--;
    } while (n > 2);
    return 0;
}
