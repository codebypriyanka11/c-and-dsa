#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt = 0;
    int lastDigit;
    while (n > 0)
    {
        lastDigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }

    return cnt;
}
int secondCount(int n)
{
    int cnt = (int)(log10(n) + 1);
    return cnt;
}
void reverse1Number(int n)
{
    int reverseNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10;
    }
    cout << reverseNum;
}
void palindrome(int n)
{
    int reverseNum = 0;
    int duplication = n;
    while (n > 0)
    {

        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10;
    }
    if (reverseNum == duplication)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
void armstrong(int n)
{
    int duplication = n;
    int sum = 0;
    while (n > 0)
    {

        int lastD = n % 10;
        sum = sum + (lastD * lastD * lastD);
        n = n / 10;
    }
    if (sum == duplication)
    {
        cout << duplication << " " << "is armstrong number";
    }
    else
    {
        cout << duplication << " " << "is not armstrong number";
    }
}
void divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
void mathematicalObservation(int n)
{
    vector<int> ls;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}
void primeNumber(int n)
{
    int counter = 0;
    for(int i = 1; i*i <= n; i++) {
        if (n % i == 0)
        {
            counter++;
            if((n/i)!= i) counter++;
        }
    }
    if (counter == 2){
            cout <<  "is a prime number";
        }
        else{
            cout <<  "is not a prime number";
        }
}
void GCDandHCF (){
int n1 = 12 ;
int n2 = 34;
int gcd = 1;
for (int i = 1 ; i <= min(n1,n2) ; i++){
    if(n1%i==0 && n2%i==0){
        gcd=i;
    }
}
cout<< gcd <<" is GCD / HCF of "<< n1 << " and " <<n2 <<endl;
}
void otherWayToGCD(){
    int n1 = 72 ;
int n2 = 36;
int gcd = 1;
for (int i = min(n1,n2) ; i >= 1  ; i--){
    if(n1%i==0 && n2%i==0){
        gcd=i;
        break;
    }
}
cout<< gcd <<" is GCD / HCF of "<< n1 << " and " <<n2 <<endl;
}
void euclidenAlgoritham(){
    int n1 = 10;
    int copyn1 = n1 ;
    int n2 = 25;
    int copyn2 = n2;
   while(n1>0 && n2>0){

    if(n1>n2){
        n1 = n1%n2;
    }else{
        n2 = n2%n1;
    }

   }
   if(n1==0){
    cout<< n2 << " is the gcd of "<< copyn1 <<" and "<<copyn2<<endl;
   }else{
     cout<< n1 << " is the gcd of "<< copyn1 <<" and "<<copyn2<<endl;
   }
    
}

int main()
{
    int n = 11;

    //    cout << count(n);
    // cout << secondCount(n);
    //    reverseNumber(n);
    //    palindrome(n);
    // armstrong(n);
    // divisor(n);
    // mathematicalObservation (n);
    // primeNumber (n);
    //  GCDandHCF();
    //  otherWayToGCD();
    euclidenAlgoritham();
}