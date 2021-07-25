#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

string binToDex(string s)
{   int power=0;
    long long result = 0;
    for(int i = s.length()-1;i>=0;i--){
         result = (s[i]-48)*(int)pow(2,power)+result;
         power++;
    }
    return to_string(result);
}
int main()
{
    string s;
    cin >> s;
    cout << binToDex(s);
    return 0;
}
