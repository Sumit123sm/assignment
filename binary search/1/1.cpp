#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,4,5,5,5,5,6,6};
    int n=11;
    int x=0;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x)
        {
            if(arr[mid+1]!=x)
            {   flag=true;
                cout<<mid;
                break;
            }
            else{
                lo=mid+1;
            }
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;
}