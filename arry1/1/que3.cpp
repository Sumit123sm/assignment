#include <iostream>
#include<climits>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int mins = INT_MAX;
for(int i=0;i<5;i++){
mins = min(mins,arr[i]);
}
cout << mins;
return 0;
}