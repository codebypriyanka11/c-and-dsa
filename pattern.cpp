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
// * * * * 
// * * * *
// * * * *
// * * * *

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
// *
// * *
// * * *
// * * * *

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
// 1
// 1 2
// 1 2 3 

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
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4

// #include <bits/stdc++.h>
// using namespace std;
// void print5(int n){
//     for(int i = 1; i <=n; i++){
//         for(int j = 0; j <n-i+1 ; j++){
//             cout<<"*"<<"";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print5(n);
//     }
//     return 0;
// }
// * * * * *
// * * * *
// * * *
// * *
// * 

// #include <bits/stdc++.h>
// using namespace std;
// void print6(int n){
//     for(int i = 1; i <=n; i++){
//         for(int j = 1; j <n-i+1 ; j++){
//             cout<<j<<"";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print6(n);
//     }
//     return 0;
// }
// 1 2 3
// 1 2 
// 1

// #include <bits/stdc++.h>
// using namespace std;
// void print7(int n){
//     // rows
//     for(int i = 0; i < n; i++){
//     //    space
//         for(int j = 1; j <= n-i+1 ; j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j = 1; j <= 2*i+1 ; j++){
//             cout<<"*";
//         }
//         // space
//         for(int j = 1; j <= n-i+1 ; j++){
//             cout<<" ";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print7(n);
//     }
//     return 0;
// }
//     *    
//    ***   
//   *****  
//  ******* 
// another way of pattern 7
// #include <bits/stdc++.h>
// using namespace std;
// void print7(int n){
//     // rows
//     for(int i = 1; i <= n; i++){
//     //    space
//         for(int j = 1; j <= n-i+1 ; j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j = 1; j <= 3*i-(i-1); j++){
//             cout<<"*";
//         }
//         // space
//         for(int j = 1; j <= n-i+1 ; j++){
//             cout<<" ";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print7(n);
//     }
//     return 0;
// }
//     ***    
//    *****   
//   *******  
//  ********* 

// #include <bits/stdc++.h>
// using namespace std;
// void print8(int n){
//     // rows
//     for(int i = 0; i < n; i++){
//     //    space
//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j = 0; j < 2*n-(2*i+1) ; j++){
//             cout<<"*";
//         }
//         // space
//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print8(n);
//     }
//     return 0;
// }
//  ***** 
//   ***  
//    *   

// another way to print8
// #include <bits/stdc++.h>
// using namespace std;
// void print8(int n){
//     // rows
//     for(int i = 1; i <= n; i++){
//     //    space
//         for(int j = 1; j <= i; j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j = 1; j <= 3*n-(2*i+1) ; j++){
//             cout<<"*";
//         }
//         // space
//         for(int j = 1; j <= i; j++){
//             cout<<" ";
//         }
//          cout<<endl;
//     }
   
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print8(n);
//     }
//     return 0;
// }
//  ********* 
//   *******  
//    *****   
//     ***   

// combination of pattern 7 and 8
#include <bits/stdc++.h>
 using namespace std;
void print7(int n){
    // rows
    for(int i = 1; i <= n; i++){
    //    space
        for(int j = 1; j <= n-i+1 ; j++){
            cout<<" ";
        }
        // stars
        for(int j = 1; j <= 3*i-(i-1); j++){
            cout<<"*";
        }
        // space
        for(int j = 1; j <= n-i+1 ; j++){
            cout<<" ";
        }
         cout<<endl;
    }
}
void print8(int n){
    // rows
    for(int i = 1; i <= n; i++){
    //    space
        for(int j = 1; j <= i; j++){
            cout<<" ";
        }
        // stars
        for(int j = 1; j <= 3*n-(2*i+1) ; j++){
            cout<<"*";
        }
        // space
        for(int j = 1; j <= i; j++){
            cout<<" ";
        }
         cout<<endl;
    }
   
}
int main(){
    int t=1;
    for(int i=0; i<t; i++){
        int n=4;
        print7(n);
        print8(n);
    }
    return 0;
}
//     ***    
//    *****   
//   *******  
//  ********* 
//  ********* 
//   *******  
//    *****   
//     ***    