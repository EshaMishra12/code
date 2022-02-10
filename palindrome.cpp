#include <stdio.h>
#include <iostream.h>

int main()
{
int n,s=0,r,t;
cout<<"Enter number: ";
cin>>n;
t=n;
while(n)
{
r = n%10;
s = s*10 + r;
n = n/10;
}
if (t==s)
{
cout<<"No is Pal...";
}
else
{
cout<<"No is not Pal. . .";
}
return 0;
}
