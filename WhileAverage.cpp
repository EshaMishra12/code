#include<iostream>
using namespace std;

int main()
{
int i =1;
int n;
int sum=0;
float avg;
cout<<"Enter a number:";
cin>>n;
while(i<=n)
{
cout<<i<<endl;
sum = sum + i;
i++;
}
avg=sum/(float)n;
cout<<"Sum = "<<sum<<endl;
cout<<"Average :"<<avg<<endl;
cout<<"Bye. . . ";
}
