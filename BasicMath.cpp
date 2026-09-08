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
               ls.push_back(n/i);  
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls)cout<<it<<" ";
}

int main()
{
    int n = 30;

    //    cout << count(n);
    // cout << secondCount(n);
    //    reverseNumber(n);
    //    palindrome(n);
    // armstrong(n);
    // divisor(n);
    mathematicalObservation(n);
}