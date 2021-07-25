#include<iostream>
#include<string>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    char s[200];
    for(int i = 0 ; i < n ; i++ )
    {
        cin.getline(s[i],std);
    }
    for(int i = 0 ; i < n ; i++ )
    {
        cout<<s[i]<<endl;
    }
}
