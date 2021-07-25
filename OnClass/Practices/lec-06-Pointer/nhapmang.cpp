#include <iostream>
#include <string>
using namespace std;
void input(long long arr[] , int *n)
{
    cin>>*n;

    for(int i = 0 ;i<*n ; i++){
        cin>>*(arr+i);
    }
}
void display(long long arr[] , int *n)
{
    for(int i = 0 ;i<*n ; i++){
        cout<<*(arr+i)<<" ";
    }
}
int main()
{
    long long  arr[1000];
    int n;
    input(arr, &n);
    display(arr, &n);
    return 0;
}
