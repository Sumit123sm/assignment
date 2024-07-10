#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
   string s="I am a pwain ";
    // string s="I am a pwain z";
   string word="",maxWord="";
   int n=s.size();
   for(int i=0;i<n;i++){
    if(s[i]==' '){
        maxWord=max(word,maxWord);
        word="";
    }
    else word+=s[i];
   }
   maxWord=max(maxWord,word);
   cout<<maxWord<<endl;
}