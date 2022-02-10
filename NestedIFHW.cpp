#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the course code .";
    cin >> a;
    cout << "Enter section ";
    cin >> b;

    if (a == 1)
    {
        if (b == 2)
        {
            cout << "Your course is bca.";
        }
        else
        {
            cout << "Your course doesnt exists.";
        }
    }
    else 
    {
        cout<<"Your course code is wrong.";
    }

        return 0;
    }