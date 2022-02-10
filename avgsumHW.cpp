#include <iostream>
using namespace std;

int main()
{
    int Bca,btec,bpharm,sum,avg;

 cout<<"Enter BCA marks :";
 cin>>Bca;
 cout <<"Enter Btech marks: ";
 cin>>btec;
 cout<<"Enter Bpharm marks:";
 cin>>bpharm;
sum= Bca+btec+bpharm;
 avg= sum/3;
 cout<<" BCA marks:"<<Bca  <<endl <<"Btech marks:" <<btec <<endl <<"Bpharm marks:" <<bpharm<<endl ;
cout<<"The Total is :" <<sum <<endl <<"The average :"<<avg;
 return 0;


}