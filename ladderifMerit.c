#include<iostream>
using namespace std;
int main()
{
int b,c,d,e,f;
float a;
cout<<"Enter the marks of 5 subjects: ";
cin>>f>>b>>c>>d>>e;
a=(f+b+c+d+e)/5.0;
if(a<=100&&a>=90)
{
cout<<"Congrats you have scored Merit place";
}
else if(a<=89&&a>=60)
{
cout<<"Congrats you have scored First place";
}
else if(a<=59&&a>=50)
{
cout<<"Congrats you have scored Second place";
}
else if(a<=49&&a>=30)
{
cout<<"Congrats you have scored Third place";
}
else
{
cout<<"Better Luck Next Time";
}
}
