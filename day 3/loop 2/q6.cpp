#include <bits/stdc++.h>
using namespace std;
int main()
{
   
   int b,n;
   cin>>n;
   b=n;
   int a,sum=0;
   while(n!=0){
     a=n%10;
     sum =sum*10 + a;
     n/=10;
   }
   cout<<"reverse number is "<<sum<<endl;
   cout<<b+sum<<endl;
}