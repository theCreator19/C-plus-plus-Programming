#  Conditional Statements

#  HackerRank Problem Solved using C++.

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    

    // Write Your Code Here
    char c[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (n<=9)
    {
        cout<<c[n];
    }
    else
    {
        cout<<"Greater than 9";
    }
    

    return 0;
}
