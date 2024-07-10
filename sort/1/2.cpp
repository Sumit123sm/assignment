#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={4,2,9,7,8};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // almost sorted
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }//2 4 7 9 8 - modified array
    // check if modified array is sorted or not 
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    cout<<endl;
    if(flag==true) cout<<"Almost Sorted ";
    else cout<<"Not Almost Sorted ";
}