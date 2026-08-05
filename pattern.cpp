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
//    }
// }
//  int main(){
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
//    }
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
//    }
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
//    }
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
//    }
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
//    }
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
//    }
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
//    }
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
//    }
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
// #include <bits/stdc++.h>
//  using namespace std;
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
//    }
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         print7(n);
//         print8(n);
//     }
//     return 0;
// }
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***

// #include <iostream>
// using namespace std;
// void print10(int n){
//     for(int i=1; i<=2*n-1; i++){
//         int star=i;
//         if(i>n) star=2*n-i;
//         for(int j=1; j<=star; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t=1;
//     for(int i=0; i<t; i++){
//         int n=4;
//         // cin>>n;
//         print10(n);
//     }
// }
// *
// **
// ***
// ****
// ***
// **
// *


#include <iostream>
using namespace std;
void print11(int n)
{

    int start = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void print12(int n)
{

    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void print13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i + 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // character
        char cha = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << cha;
            if (j <= breakpoint)
                cha++;
            else
                cha--;
        }
        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print19(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j <= iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }

    iniS = 2*n-2 ;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j <= iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}
void print20(int n){
     int space = 2*n-2;
     for(int i=1; i<=2*n-1; i++){
        // stars
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j = 1;j<=stars;j++){
cout<<"*";
        }
        // space
for(int j = 1;j<=space;j++){
    cout<<" ";
}
//  stars
 for(int j = 1;j<=stars;j++){
cout<<"*";
        }
        cout<<endl;
        if(i < n)space -=2;
        else space +=2;
     }
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i ==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){

        }
    }
}
int main()
{
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        int n = 5;
        // cin>>n;
        print21(n);
    }
}

