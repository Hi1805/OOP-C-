#include<iostream>
using namespace std;
void MaxAndMin(int a[], int n){
	int max = a[0];
	int min = a[0];
	for(int i = 0 ;i<n;i++){
		if(a[i]<min)
			min = a[i];
		if(a[i]>max)
			max =a[i];	
	}
	cout<<max;
	cout<<min;
}
int main(){
	int n ;
	do{
		cin>>n;
	}while(n<=2||n>=1000);	
	int a[n];
	for(int i = 0 ; i < n ; i ++){
		cin>>a[i];
	}
	MaxAndMin(a,n);
}
