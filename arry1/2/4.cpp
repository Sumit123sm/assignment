#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sumeven=0;
    int sumodd=0;
//    for(int i=0;i<n;i++)
//    {
//     (i%2==0)? sumeven+=arr[i] : sumodd+=arr[i];
//    }
   for(int i=0;i<n;i++)
   {
    if(i%2==0) sumeven+=arr[i];
    else sumodd+=arr[i];
   }
   cout<<endl;
   cout<<sumeven-sumodd;
}