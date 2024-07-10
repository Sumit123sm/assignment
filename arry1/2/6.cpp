#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,3,3,4,5,6};
    bool flag=false;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==true) break;
        
    }
    if(flag==true)
    {
        cout<<"contain duplicate element ";
    }
    else
    cout<<"not contain duplicate element ";
    

}