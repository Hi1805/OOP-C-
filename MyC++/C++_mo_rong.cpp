#include<iostream>
#include<time.h>

using namespace std;
//Tham bien,tham tri
void changesAB1(int a,int b){
	a = a+1,b=b+a;
	cout<<"Day la gia tri cua a va trong ham changes 1 :::"<<a<<" "<<b<<endl;
}
void changesAB2(int a,int &b){
	a = a+1,b=b+a;
	cout<<"\nDay la gia tri cua a va trong ham changes 2 :::"<<a<<b<<" "<<endl;
}
void changesAB3(int &a,int &b){
	a = a+1,b=b+a;
	cout<<"\nDay la gia tri cua a va trong ham changes 3 :::"<<a<<b<<" "<<endl;
}
void changesAB4(int &a,int b){
	a = a+1,b=b+a;
	cout<<"\nDay la gia tri cua a va trong ham changes 4 :::"<<a<<b<<" "<<endl;
}
void outputAB(int a , int b){
	cout<<"\n Gia tri cua a va b "<<a<<" "<<b;
}
//Dinh nghia toan tu
struct PS{
	int tu,mau;
};
void input(PS &a){
		cout<<"\n nhap tu so ";cin>>a.tu;
	do{
		cout<<"nhap mau so ";cin>>a.mau;
	}
	while(a.mau==0);
}
void  output(PS a){
	cout<<endl<<a.tu<<"/"<<a.mau;
}
//scope

PS operator +(PS &a, PS b){
	PS t ;
	t.tu = a.tu*b.mau + b.tu*a.mau;
	t.mau = b.mau*a.mau;
	return t;
}
//input Stream
//Point

//>>,a
istream &operator >>(istream &is,PS&a){ //dinh nghia cho doi truyen vao
	cout<<"\n Tu so:"; 
	is>>a.tu;
	do{ cout<<"nhap mau so:"; is>>a.mau; } 
	while (a.mau==0);
	
	return is;
	
}
ostream &operator<<(ostream &os, PS a)
{
		os<<a.tu<<"/"<<a.mau;
		return os;
}

int main(){
//=============================================
//	int a[] = {1,2,3,4};
//	int a =10;
//	int &r=a;
//	r=20;
//	cout<<a<<endl;
//	r=5;
//	a==r ? cout<<"a luon bang r"<<endl : cout<<"a khong bang r"<<endl;
//	cout<<a<<endl;// 20 vi a duoc cap bo nho boi r,khi r thay doi thi a cung thay doi
	//=============================================

	//Tham bien,tham tri
//	int a = 1,b=2; 
//	changesAB1(a,b);outputAB(a,b);// changes : 2,4  && output :1,2
//	changesAB2(a,b);outputAB(a,b);//changes :2,4  && output : 1,4 =>b thay doi , b = 4
//	changesAB3(a,b);outputAB(a,b);// changes : 2,6 va output = 2,6 => a va b dieu thay doi 
	
		//=============================================

	//Dinh nghia toan tu
//	PS a,b;
//	input(a);output(a);
//	input(b);output(b);
//	PS c = a+b; output(c);
	//=============================================

	// Dinh nghia toan tu >> << vao va ra
//		PS a,b;
//	cout<<"nhap phan so a";
//	cin>>a; //a nay chinh la kieu du lieu duoc dinh nghia(struct) hay tu dinh nghia(double,int);
//	cout<<a;
	
	//=============================================
	//cap phat bo nho va thu hoi bo nho
	//C: dung lenh malloc de cap phat  va dung lenh free de thu hoi bo nho
	//C++: dung lenh new de cap nhat , dung delete de thu hoi
	
	int *a;//
	int n;
	cout<<"nhap so phan tu can cap phat:"; cin>>n;
	a= new int[n];
////	srand(time(NULL)); //srand(10);
	for(int i=0; i<n; i++)  a[i]= 1;
	cout<<"\n Cac so vua sinh ngau nhien:\n";
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	delete []a;
//	for(int i=0; i<n; i++) cout<<a[i]<<" "; no se xuat ra dia chi

//	int *a;
//	int i=0;
//	while (1)
//	{
//	a= new int [100];
//	if(a!=NULL) 
//	 { cout<<"\n Cap phat thanh cong lan thu "<<++i; delete []a;}
//	else  {cout<<"\n HET BO NHO!!!\n"; break; }
//	}

	system("pause");
	return 0;
}


