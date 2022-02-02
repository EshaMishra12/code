#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a number:";
cin>>a;
if(a%2==0)
{
cout<<"Even ";
goto abc;
}
cout<<"Odd ";
abc:
return 0;4
}
