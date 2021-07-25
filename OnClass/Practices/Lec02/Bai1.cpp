#include<iostream>
using namespace std;
long long  sumNumbers(long a, long b , long c =0 ,long d =0)
{
  return a + b + c + d;
}
int main()
{
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << sumNumbers(a, b) << endl;
    cout << sumNumbers(a, b, c) << endl;
    cout << sumNumbers(a, b, c, d);
    return 0;
}

