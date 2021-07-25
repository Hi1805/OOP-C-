#include<stdio.h>
#include<Math.h>
#include<iostream>
using namespace std;
float cau1(int x , int y){
	return pow(y + x*x,1/5)/(x-7);
}
void cau2a(int  a[],int &n){
	printf("nhap n ");
	scanf("%d",&n);
	for(int i = 0; i<n;i++){
		printf("nhap so thu %d ", i);
		scanf("%d",&a[i]);
	}
}
void hienthi(int a[],int n){
	printf("Hien thi  ");
	
	for(int i = 0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void cau2b(int a[],int n){
	for(int i = 0 ; i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	}
	hienthi(a,n);
}
void cau2c(int a[],int n){
	for(int i = 0;i<n;i++){
		if(a[i]%7==0 && a[i]%3!=0){
			printf("%d ",a[i]);
		}
	}
}
int cau2d(int a[],int n){
	int min = a[0];
	for(int i = 0;i<n;i++){
		if(a[i]<min){
			min =a[i];
		}
	}
	return min;
}
int main(){
	int a[100],n;
	printf("Dap an cau 1 %f ", cau1(5,6));
	cau2a(a,n);
	cau2b(a,n);
	a
	printf("Dap an cau 2c ");
	cau2c(a,n);
	printf("Dap an cau 2d : %d",cau2d(a,n));
	
}




