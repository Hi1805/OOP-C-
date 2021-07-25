#include<iostream>
using namespace std;
void input(long long  arr[], int n)
{
    for(int i  = 0 ; i < n ; i++){
        cin>>arr[i];
    }
}
bool check(long long n){
    int d = 0;
    int number = 0;
    int x = n;
    while(n > 0 ){
        d = n % 10;
        number = number*10 + d;
        n = n/10;
    }
    return (number == x);
}
// Display sysmmetrical numbers from an array
void displaySymmetricalNumbers(long long arr[], int n)
{   int count = 0;
    string s = "";
    for(int i = 0 ; i < n ; i++){
        if(check(arr[i])){
            count ++;
            s += to_string(arr[i]) + " ";
        }
    }
    cout<<count<<endl<<s;
}
int main()
{
    long long arr[1000];
    int n;
    cin >> n;
    input(arr, n);
    displaySymmetricalNumbers(arr, n);
    return 0;
}
