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

void sortElements(int arr[] , int n)
{ 	//  sap xep cac so lon nhat bo vao cuoi mang
    for (int i = 0; i < n-1; i++)     
   		 for (int j = 0; j < n - i - 1; j++)  
       		 if (arr[j] > arr[j+1]) 
            {
            	int c  = arr[j+1];
            	arr[j+1] = arr[j];
            	arr[j] = c;
			}
	
}

int main()
{
	int arr[10000];
	int n = 0;
	cin >> n;
	input(arr, n);
	sortElements(arr,n);
	display(arr,n);
    return 0;
}

