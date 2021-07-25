
#include <iostream>
#include <vector>
using namespace std;

string toHex(unsigned long n)
{

    vector<long> vt;
    int du = 0;
    string s="";
    while(n > 0){
    	du = n % 16;
    	n /= 16;
    	if(du > 9){
            s = (char)(du + 55)  + s;
		}
    	else
			 s = char(du + 48)  + s;

    }
    return s;
}
int main()
{
    unsigned long n;
    cin >> n;
    cout << toHex(n);
    return 0;
}
