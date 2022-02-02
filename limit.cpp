#include <iostream>
using namespace std;

int main()
{
int i=1,n;
cout<<"Enter Limit:";
cin>>n;
L:
if(i%2==0)
cout<<i<<endl;
i++;
if(i<=n)
{
goto L;
}
cout<<"\nGood Work . . .";
return 0;
}
