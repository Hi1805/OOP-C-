#include<iostream>
#include<string.h>
using namespace std;
//bool bai1(unsigned int a , unsigned int b , unsigned int c){
//	if(a<=0 ||b<=0||c<=0 ||a>=1000 ||b>=1000||c>=1000)
//		return false;
//	return a == b + c ? true : (a+b == c?true : (a+c ==b));
//}
int bai2(int a[], int len){
	int dem1 = 1;
	int dem2 = 0;
	for(int i = 0; i <len-1; i++){
		if(a[i+1]-a[i] == 1){
			dem1++;
		}
		else
			if(dem1>dem2){
				dem2 = dem1;
				dem1 = 1;
			}

	}
		return dem1 > dem2 ? dem1 : dem2;
}
int main(){
	int a[] = {3 ,5, 8, 9 ,22 ,34 ,35, 36 ,19 ,11};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<bai2(a,len);
}
