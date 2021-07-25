#include <iostream>
#include<cstring>
using namespace std;
void  input(string s[], int n)
{
    char ch[201];
    for(int i = 0;i<n;i++){
        cin.getline(ch,201);
        s[i]=ch;
    }
}
void output(string s[], int n){
    for(int i = 0;i<n;i++){
      	if(i<n-1)
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
}

