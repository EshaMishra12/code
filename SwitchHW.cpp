#include <iostream>
using namespace std;
int main()
{
    int week;
    cout << "Enter your day number.";
    cin >> week;

    switch (week)
    {
        case 1:
        {
            cout << "Monday *****";
            break;
        }
        case 2:
        {
            cout << "tuesday ;(";
            break;
        }case 3:
        {
            cout << "wednesday *****";
            break;
        }case 4:
        {
            cout << "Thursday :(";
            break;
        }case 5:
        {
            cout << "Friday *****";
            break;
        }case 6:
        {
            cout << "saturday<3 *****";
            break;
        }case 7:
        {
            cout << "sunday:)<3 *****";
            break;
        }
         
    }
    return 0;
}