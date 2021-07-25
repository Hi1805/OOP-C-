#include<iostream>
using namespace std;
int Sum(int x){
	int d=0;
	for(;x!=0;x/=10){
		d+=x%10;
	}
	return d;
};
int main(){
	int n;
	do{
		cin>>n;
	}while(n<=0||n>65000);
	cout<<Sum(n);
}	
