#include <iostream>
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
void insertElement(int arr[], int n, int value)
{
	for(int i = n; i > 0 ; i -- ){
		if(arr[i-1]>value)
			arr[i] = arr[i-1];
		else{
			arr[i] = value;
			break;	
		}
		if(i==1){
			arr[0] = value;
		}
	}
}
	
int main()
{
	int  arr[10000];
	int n = 0, val = 0;
	cin >> n >> val;
	input(arr, n);
	insertElement(arr, n, val);
	n = n + 1;
	display(arr, n);
	return 0;
}
