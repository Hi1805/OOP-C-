#include<iostream>
#include<math.h>
using namespace std;

void input(int arr[] , int n)
{
	for(int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
	}
}

void display(int arr[] , int n)
{
	for(int i = 0 ;i < n ; i++){
        cout<<arr[i]<<" ";
	}
}
bool  isprime(int x){
	if(x<2){
		return false;
	}
	for(int i = 2; i <= sqrt(x); i++){
		if(x% i == 0)
			return false;
	}
	return true;
}
void remove(int a[] , int n , int index){
	for(int i = index ; i <n  ; i ++ ){
		a[i] = a[i+1];
	}
}
int removePrimes(int arr[], int n)
{	int count = 0 ; 
    for(int i = 0  ; i < n ; ){
    	if(isprime(arr[i])){
    		count++;
    		remove(arr,n,i);		
		}
		else i++;
	}
	return count ;
}

int main()
{
	int arr[10000];
	int n = 0;
	cin >> n;
	input(arr, n); 
	int removedPrimes = removePrimes(arr, n);
	n = n - removedPrimes;
	display(arr, n);
	return 0;
}
