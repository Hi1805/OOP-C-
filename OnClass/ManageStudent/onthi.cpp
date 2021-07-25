#include<iostream>
using namespace std;
//class Test{
//    static int x;
//    public:
//    Test(){
//        x++;
//    }
//    static getX(){
//        return x;
//    }
//
//};
//int Test::x = 0;
int f(int &x , int c){
    //4
    //4
    c = c - 1;//c = 3
    if( c == 0 )
        return 1;
    x  = x + 1;// 5

    return f(x,c)*x;// f(x,c) * x;

   // f(5,3) => f(6,2) * x
   // f(7,1) = >  x = 7
   // khi ma co tham chieu , thi
   // cung chung 1 dia chi
}

int main(){
        int a = 4;
        cout<<"ket qua "<<f(a,a);
//    cout<<Test::getX()<<" " ;
//    Test t[5];
//     Test[5] tuong duong no tao  5 cai Test ();
//     thi tuong duong no goi ham goi khoi tao 5 lan
  //  cout<<Test::getX()<<" " ;
    return 0;
}
