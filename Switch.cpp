#include<iostream>
using namespace std;
int main()
{
int b,c,d,e,f,sum;
int a;
cout<<"Enter the marks of 5 subjects: ";
cin>>f>>b>>c>>d>>e;
sum=(f+b+c+d+e);
a=sum/5;
a=a/10;
switch(a)
{
case 1:
case 2:
case 3:
cout<<"Fail . . .\n";
break;
case 4:
cout<<"3rd . . \n";
break;
case 5:
cout<<"2nd . . . \n";
break;
case 6:
case 7:
case 8:
cout<<"1st . . .\n";
break;
case 9:
case 10:
cout<<"Merit . . .\n";
break;
default:
cout<<"Fake data is there . . .\n";
}
}
