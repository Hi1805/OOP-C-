#include<iostream>
using namespace std;
int cumulative(int a[],int n){
	int c = 1;
	for(int i = 0;i<n;i++){
		c*=a[i];
	}
	return c;
}
int main(){
	int n ;
	do{
		cin>>n;
	}while(n<=1||n>1000);
	int a[n];

	for(int i = 0 ;i<n;){
		cout<<"enter a["<<i<<"]"<<endl;
		cin>>a[i];
		if(a[i]<0||a[i]>=100000){
            cout<<"enter a["<<i<<"]"<<endl;
            cin>>a[i];
		}
		else i++;
	}
if(cumulative(a,n)%3==0) cout<<"YES";
else cout<<"NO";
}
