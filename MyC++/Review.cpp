#include<iostream>
using namespace std;
//tham so ham main
int main(int agrc ,char **argv){
	cout<<agrc;
	cout<<"xin chao";
	for(int i = 0;i<agrc;i++){
		cout<<"\n "<<i<<": "<<argv[i];
	}
}
