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
int sumOfNum2(int n,int sum){
    if(n<1){
return sum ;
    }
    sumOfNum2(n-1,sum+n);
}
int factorial(int n , int f){
    
    if(n<1){
        return f;
    }
    factorial(n-1,f*n);
}
void  reverseArray (int arr[],int start,int last){
    if(start>=last) {
      
    }else{
        swap(arr[start],arr[last]);
        reverseArray(arr,start+1,last-1);
    }
        
   
}
void secondReveseArray(int arr[],int i ,int n){
    if(i >= n/2){

    }else{
        swap(arr[i],arr[n-i]);
        secondReveseArray(arr,i+1,n);
    }
}
bool checkStringPalndrom(int i, string &s){
    if(i>=s.size()){

    }else{
        if(s[i] != s[s.size()-i-1]){
            cout<<"False"<<endl;
        }else{
           return checkStringPalndrom(i+1,s);
        }
       
    }

}



int main() {
 int n = 5;
 int s= 1;
 int sum = 0;
 int factorial1 = 1;
 int arr[n] = {1,2,3,4,5};
//  reverseArray(arr,0,n-1);
// secondReveseArray(arr,0,n-1);
//  cout<<"Reverse Array"<<endl;
//  for(int i=0;i<=n-1;i++){
//     cout<<arr[i]<<" ";
//  } 
  string str = "madam";
  cout<<checkStringPalndrom(0,str);
//  name(s,n);
// name2(s,n);
// printNumber(s,n); 
// reverseNumber(n,n);
// cout<<sumOfNum(n,n);
// cout<<sumOfNum2(n,sum);
// cout<<factorial(n,factorial1);
return 0;
}