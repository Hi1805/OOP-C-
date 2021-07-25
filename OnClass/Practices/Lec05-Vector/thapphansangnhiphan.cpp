#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

string toBin8bit(int num )
{
    string s="";
    int extra = 0;
    int num2 = abs(num);
    while(num2>0)
    {
        extra= num2%2;
        s = to_string(extra) + s;
        num2=num2/2;
    }
    for(int i = 0; s.length()<8; i++)
    {
        s= '0' +s;
    }
    if(num<0)
    {
        for(int i = 0; i<8; i++)
        {
            s[i] = (s[i] =='0') ?'1':'0';
        }
        int extra = 1;
        int temp = 0;
        for(int i = s.length()-1; i>0; i--)
        {
            temp =  (s[i]-48) + extra;
            if(temp==1)
            {
                s[i] = '1';
                break;
            }
            else
            {
                s[i] = '0';
                extra = 1;
            }
        }
    }
    return s;
}
int main()
{
    int num;
    cin >> num;
    cout << toBin8bit(num);
    return 0;
}
