#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

bool isPrime(int x)
{
	if(x<2){
		return false;
	}
	for(int i = 2; i <= sqrt(x); i++){
		if(x% i == 0)
			return false;
	}
	return true;
}
void displayAsPrimes(int n)
{	string s = "";
	for(int i = 2 ; i < n ; ){
		if(isPrime(i) && n%i == 0 ){
			s = s + to_string(i) + "*";
			n = n/i;
		}
		else i++;
	}
    s+= to_string(n);
	cout<<s;
}
int main()
{
    int n;
    cin >> n;
    displayAsPrimes(n);
	return 0;
}
