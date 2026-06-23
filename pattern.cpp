#include <iostream>
using namespace std;
void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int t=2;
    for(int i=0; i<t; i++){
        int n=4;
        // cin>>n;
        print(n);
    }
}