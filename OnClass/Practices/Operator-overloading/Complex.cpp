#include <iostream>
#include<math.h>
using namespace std;

class Complex
{
private:
    double  real;
    double imaginary;
public:
  	void input(){
        cin>>this->real>>this->imaginary;
  	}
  	void display(){
  	    if(imaginary ==  0 ){
            cout<<real<<endl;
            return ;
  	    }
        if(imaginary == 1 ){
            if(real == 0){
                cout<<"i"<<endl;
            }
            else cout<<real<<" + i"<<endl;
            return;
        }
        string s = imaginary  < 0 ? "-" :  "+";
        cout<<this->real<<" "<<s<<" "<<abs(imaginary)<<"i"<<endl;

  	}
    Complex operator +( Complex c1){
        Complex x;
        x.imaginary = this->imaginary + c1.imaginary;
        x.real = this->real + c1.real;
        return x;
    }
    Complex operator+(int n ){
        Complex x;
        x.real = this->real + n;
        x.imaginary = this->imaginary;
        return x;
    }

    Complex operator - (int n ){
        Complex x;
        x.real = this->real - n;
        x.imaginary = this->imaginary;
        return x;
    }

    Complex operator - ( Complex c1){
        Complex x;
        x.imaginary = this->imaginary - c1.imaginary;
        x.real = this->real -  c1.real;
        return x;
    }
    Complex operator*(int n ){
        Complex x;
        x.real = this->real*n;
        x.imaginary = this->imaginary*n;
        return x;
    }
    friend Complex operator+(int n , Complex c1);

    friend Complex operator - (int n , Complex c1);

    friend istream & operator >>(istream & is, Complex &c1);

    friend  ostream & operator <<(ostream & os, Complex c1);
};
Complex operator+(int n , Complex c1){
    Complex x;
    x.real =c1.real + n;
    x.imaginary = c1.imaginary;
    return x;
}
Complex operator- (int n , Complex c1){
    Complex x;
    x.real = n - c1.real ;
    x.imaginary =  - c1.imaginary;
    return x;
}

istream & operator >>(istream & is, Complex &c1){
    is>>c1.real>>c1.imaginary;
    return is;
}
ostream & operator <<(ostream & os, Complex c1){

      if(c1.imaginary ==  0 ){

         return  os<<c1.real;
  	    }
        if(c1.imaginary == 1 ){
            if(c1.real == 0){
                 return os<<"i";
            }
        return os<<c1.real<<" + i";
        }
        string s = c1.imaginary  < 0 ? "-" :  "+";
       return os<<c1.real<<" "<<s<<" "<<abs(c1.imaginary)<<"i";
}
int main()
{
    Complex c1, c2;

    cin >> c1 >> c2;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    cout << "5 - (c1 + c2) * 3 - c2 * 3 = ";
    cout << (5 - (c1 + c2) * 3 - c2 * 3) << endl;
    return 0;
}
