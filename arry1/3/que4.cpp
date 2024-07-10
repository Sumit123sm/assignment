#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int j=0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    //changed array
    cout<<" The desired output is : "<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

}


// 5
// 1
// 0
// 0
// 1
// 1
//  The desired output is :
// 1 1 1 0 0