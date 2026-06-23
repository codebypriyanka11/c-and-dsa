//  simple pattern

// #include <iostream>
// using namespace std;
// void print(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t=2;
//     for(int i=0; i<t; i++){
//         int n=4;
//         // cin>>n;
//         print(n);
//     }
    
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print2(int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout<<"* ";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print2(n);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print3(int n){
//     for(int i = 1; i <=n; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<j<<"";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print3(n);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print4(int n){
//     for(int i = 0; i <=n; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<i<<"";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print4(n);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void print3(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 0; j <n-i+1 ; j++){
            cout<<"*"<<"";
        }
         cout<<endl;
    }
   
}
int main(){
    int t=1;
    for(int i=0; i<t; i++){
        int n=4;
        print3(n);
    }
    return 0;
}