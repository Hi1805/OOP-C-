#include<iostream>
using namespace std;
void input(long arr[], int n)
{   int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
}
void display(long arr[], int n)
{
    for(int  i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    long  arr[1000];
    int n;
    cin >> n;
    input(arr, n);
    display(arr, n);
    return 0;
}
