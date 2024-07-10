//  no repeting element find
#include<iostream>
#include<vector>
using namespace std;
void firstNonRepeating(vector<int> a,int n)
{
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j]) break;
        }
        if(j==n)
        {
            cout<<a[i]<<" is the first Non - repeating element "<<endl;
            flag=true;
            break;
        }
    }
    if(flag)cout<<" There is no repeating element in the arry "<<endl;
    else cout<<" There is  repeating element in the arry "<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    firstNonRepeating(a,n);

}



// Input:
// 4
// 2 2 4 4
// There is no Non-repeating element in the array


// Input:
// 6
// 4 2 6 2 5 4
// 6 is the first Non-repeating element
