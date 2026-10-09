#include <bits/stdc++.h>
using namespace std;
void hashingNum(int n){ 
int arr[n] =  {1,2,8,4,1};
 //precompute 
 int hash[13]={0}; 

 for(int i=0;i<n;i++){
     hash[arr[i]]++;
 }

 
 int q=1;
 while(q--){
     int x=8;
     
     cout<<hash[x]<<endl;
 }
}
 void characterHashing(string s){
    int hash[256]={0};
    for(int i =0;i<=s.length();i++){
        // for small letters
        //  hash[s[i]-'a']++;

        // for capital letters 
        // hash[s[i]-'A']++;
       // for all characters
        hash[s[i]]++;
    }
    int q=1;
    while(q--){
        char x ='A';

// for small letters
//  cout<<hash[x-'a']<<endl;

// for capital letters 
// cout<<hash[x-'A']<<endl;

// for all characters
        cout<<hash[x]<<endl;
    }
 }
 void mapNumHashing(int n){
    int arr[n] =  {1,2,8,5,6,8,1};
    map<int,int> hash;
    for(int i = 0 ;i < n ; i++){
        hash[arr[i]]++;
    }
    for(auto x:hash){
        cout<<x.first<<"-> "<<x.second<<endl;
    }
    int q=1;
    while(q--){
        int x=8;
        cout<<hash[x]<<endl;
    }
 }
 void mapCharHashing(string s){
    map<char,int> hash;
    for(int i =0;i<s.length();i++){
        hash[s[i]]++;
    }
    for(auto x:hash){
        cout<<x.first<<"-> "<<x.second<<endl;
    }
    int q=1;
    while(q--){
        char x ='A';
        cout<<hash[x]<<endl;
    }
 }
void unorderedMapNumHashing(int n){
    int arr[n] =  {1,2,8,5,6,8,1};
    unordered_map<int,int> hash;
    for(int i = 0 ;i < n ; i++){
        hash[arr[i]]++;
    }
    for(auto x:hash){
        cout<<x.first<<"-> "<<x.second<<endl;
    }

    int q=1;
    while(q--){
        int x=8;
        cout<<hash[x]<<endl;
    }

}

 int main() {
 int n = 7;
 string s = "abacdeASEFD";
//   characterHashing(s);
//   mapNumHashing(n);
//   mapCharHashing(s);
unorderedMapNumHashing(n);
//  hashingNum(n);
  return 0;
} 