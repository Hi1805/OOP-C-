#include <iostream>
#include<cstring>
using namespace std;
void  input(string s[], int n)
{
    for(int i = 0;i<n;i++){
        getline(cin,s[i]);
    }
}
void output(string s[], int n){
    for(int i = 0;i<n;i++){
        if(n-1)
        cout<<s[i]<<endl;
        else cout<<s[i];
    }
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string s[n];
    input(s,n);
    output(s,n);
    return 0;
}


