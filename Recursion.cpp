#include <bits/stdc++.h>
using namespace std;
void name(int s,int n){
for(int i =s;i<=n;i++) {
    cout<<"Priyanka"<<endl;
}

 }
void name2(int s,int n){ 
    if(s<n){
        //  cout<<"Priyanka "<<s<<endl;
         name2(s+1,n);
          cout<<"Priyanka "<<s<<endl;
    }
}
int printNumber(int s,int n){
    if(s>n){ return 0;
    }
    // else{
    //      cout<<s<<' '<<endl;
    // }
     
printNumber(s+1,n);
 cout<<s<<' '<<endl;

}
int reverseNumber(int i,int n){
if(i<1){
    return 0;
}else{
cout<<i<<' '<<endl;}
reverseNumber(i-1,n);
// cout<<i<<' '<<endl;
}
int sumOfNum(int i,int n){
    int sum=0;
    if(i<1){
        return 0;
    }
    return i + sumOfNum(i - 1, n);
} 




int main() {
 int n = 5;
 int s= 1;
//  name(s,n);
// name2(s,n);
// printNumber(s,n); 
// reverseNumber(n,n);
cout<<sumOfNum(n,n);
return 0;
}