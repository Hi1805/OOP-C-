#include<iostream>
using  namespace std;

// ham kieu tra ve : kieudulieu ( double , int , string , float . bool  .. ) + tenham ( laSoNguyenTo)  ( doi vo truyen vào )

bool isPrime(int  n){ // la so nguyen to hay cach khac là kiểm tra số nguyên tố

    if(n < 2 ) // neu nho hon 2
        return false; // neu gap return , la no tra ve , va no khong chay tat cac cau lenh tiep theo

    cout<<" huy ";
    for(int i = 2 ; i < n ; i ++ ){
        if(n% i == 0 )
            return false;// tra ve false
        }
    // cac so con lai
    return true;
}
int main(){ // ham main

    int n ;
    cin>>n;
     // quy tac goi ham co ban cua kieu tra ve
    // tao bien  co kieu du lieu tuong ung

    bool check = isPrime(n) ;
    if(check ) cout<<" Day la so nguyen to ";
    else cout<<"khong phai so nguyen to ";

}
