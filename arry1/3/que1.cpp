#include<iostream>
using namespace std;
int counttriple(int a[],int n,int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<counttriple(a,n,x);

}

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     cout<<"enter the element ";
// 	int page[10];
//     for(int i=1;i<11;i++)
//     {
//         	cin>>page[i];

//     }

// 	int x;
//     cout<<"enter the element serach  :";
// 	cin>>x;
// 	bool flag=false;
// 	for(int i=1;i<=10;i++)
// 	{   

//         if(i>8) continue;
//         	if(x>=8) {
// 	    flag=true;
// 	        break;
// 	}
     

// 	}
// 	if(flag==true)
// 	    cout<<"yes";
// 	else
// 	cout<<"NO";
// 	return 0;
// }
