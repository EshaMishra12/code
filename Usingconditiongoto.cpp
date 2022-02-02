#include<iostream>
using namespace std;
int main()
{
int i=1,n;
cout<<"Enter a number:";
cin>>n;
abc:
cout<<i<<endl;
i++;
if(i<=10)
{
goto abc;
}
cout<<"bye. . .";
return 0;
}
