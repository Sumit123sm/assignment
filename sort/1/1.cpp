#include<iostream>


using namespace std;
int main()
{   int n=6;
    int arr[n]={6,5,-4,3,2,1};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
      //bubble sort optimised
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=n-1;j>=1;j--){
            if(arr[j]>arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                flag=false;
            }

        }
        if(flag==true){//swap did'nt happen
            break;
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}