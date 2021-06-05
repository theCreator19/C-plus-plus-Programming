#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main() {
	// Complete the program
    char a[100000],b[100000];
    cin>>a>>b;
    cout<<strlen(a)<<" "<<strlen(b)<<endl;
    cout<<a<<b<<endl<<b[0];
    for(int i=1;i<strlen(a);i++)
    {
        cout<<a[i];
    }
    cout<<" "<<a[0];
    for(int i=1;i<strlen(b);i++)
    {
        cout<<b[i];
    }
    return 0;
}
