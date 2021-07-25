#include <iostream>
#include <string>
using namespace std;
void input(string *s)
{
    getline(cin,*s);
}
int main()
{
    string s;
    input(&s);
    cout << s;
    return 0;
}
