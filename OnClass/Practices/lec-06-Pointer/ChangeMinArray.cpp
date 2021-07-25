#include <iostream>
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
long long & minValue(long long arr[] , int *n)
{   long long *min = arr;
    for(int i = 1 ; i<*n; i++){
        if(*(arr+i) < *min ){
            min = (arr + i);
        }
    }

    return *min ;
}
int main()
{
    long long arr[1000];
    int n;
    input(arr, &n);
    long long* pMin = &minValue(arr, &n);
    *pMin = 0;
    display(arr, &n);
    return 0;
}
