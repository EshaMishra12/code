#include <iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"Enter 3 numbers:";
cin>>a>>b>>c;
if(a>=b && a>=c )
{
cout<<"A is greatest . . .";
}
else if(b>=a && b>=c )
{
cout<<"B is greatest . . .";
}
else
{
cout<<"C is greatest . . .";
}
return 0;
}
