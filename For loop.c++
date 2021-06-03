#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    char c[10][10]={
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {cout<<c[i]<<endl;}
        
    }
    for(int i=10;i<=b;i++)
    {
        if(i%2==0)
        {
            cout<<"even"<<endl;
        }
        if(i%2!=0)
        {
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
