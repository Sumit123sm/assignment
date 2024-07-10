#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAnagram(string s,string t){
      if(s.size()!=t.size()) return false;
    
        int cnt[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;

        }
        // bool flag=true;
        for(int i=0;i<n;i++){
            if(cnt[i]!=0){
              return false;
            }
        }
        return true;
    }


int main()
{  
    string s,t;
    cin>>s>>t;
   if(isAnagram(s,t))
   cout<<"yes";
   else cout<<"no";





    // method 1 but TC more so method 2 is low TC
    // string s,t;
    // cout<<"enter the string ";
    // cin>>s>>t;
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // if(s==t) cout<<"anagram";





    // method 2
    // else cout<<" Not a anagram";
    // string s,t;
    // cin>>s>>t;
    // if(s.size()!=t.size()) cout<<"no anagram";
    // else {
    //     int cnt[26]={0};
    //     int n=s.size();
    //     for(int i=0;i<n;i++){
    //         cnt[s[i]-'a']++;
    //         cnt[t[i]-'a']--;

    //     }
    //     bool flag=true;
    //     for(int i=0;i<n;i++){
    //         if(cnt[i]!=0){
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if(flag==true) cout<<"yes";
    //     else cout<<"no";
    // }
    return 0;
}