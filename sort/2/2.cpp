#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr[5]={"raghav","urvi","harsh","vishwa","sanket"};
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    // bubble sort
    for(int i=0;i<n-1;i++)
    {  bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}