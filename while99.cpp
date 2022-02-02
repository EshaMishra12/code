#include<iostream>
using namespace std;

int main()
{
int sum=0;
int a;
do
{
cout<<"Enter a no:(-99 to exit)";
cin>>a;
sum=sum+a;
}while(a!=-99);
sum=sum+99;
cout<<"Sum="<<sum<<endl;

cout<<"Bye. . . ";
}
