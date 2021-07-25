#include <iostream>
#include <cstring>
using namespace std;

 long long *inputArr(int n )
{
    long long* pArr = new long long [n];
       for(int  i = 0 ; i < n ; i++ ){
            cin>>* (pArr + i );
       }
    return pArr;
}
void  display(long long pArr[] , int n)
{
    for(int i = 0 ;i<n ; i++){
        cout<<*(pArr + i)<<" ";
    }
}
int main()
{
    int *pN = nullptr; // null
    pN  = new int ;
    cin>>*pN;
    long long* pArr = inputArr(*pN);
    display(pArr, *pN);
  	delete []  pArr;
    return 0;
}
