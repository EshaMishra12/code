#include <iostream>
using namespace std;

int main()
{
    int eng,bio,sci,math,sst,sum;

 cout<<"Enter  Eng marks :";
 cin>>eng;
 cout <<"Enter Bio marks: ";
 cin>>bio;
 cout<<"Enter Science marks:";
 cin>>sci;
 cout<<"Enter maths marks:";
 cin>>math;
 cout<<"Enter SST marks:";
 cin>>sst;
sum= eng+bio+sci+math+sst;
 cout<<"The english: "<<eng  <<endl <<"Bio marks:" <<bio <<endl <<"Science maeks:" <<sci <<endl <<"Maths marks:"<<math  <<endl <<"SSt marks:" <<sst <<endl ;
cout<<"The Total  is :" <<sum;
 return 0;


}