#include <iostream>
#include<math.h>
using namespace std;
class Fraction
{
    private : int numerator, denominator;
     int ucln()// hcf(this a' this b
	{
		if(this->numerator==0)
		{
			return this->denominator;
		}
		else
		{
			int x=abs(this->numerator);
			int y=abs(this->denominator);
			while(x!=y)
			{
				if(x>y)
				{
					x=x-y;
				}
				else
				{
					y= y-x;
				}
			}
			return x;
		}
	}
	public : Fraction () {
        this->numerator = 0;
        this->denominator = 1;
	}
	Fraction(int numerator, int denominator) {
		this -> numerator = numerator;
		this -> denominator = denominator;
	}

	 int getNumerator() {
		return numerator;
	}
    void setNumerator(int numerator) {
		this->numerator = numerator;
	}

	int getDenominator() {
		return denominator;
	}

	 void setDenominator(int denominator) {
		if(denominator == 0) {
			this->denominator = 1;
		}
		else
			this->denominator = denominator;
	}
	void input() {
		cin>>this->numerator;
		cin>>this->denominator;

	}
    void display() {
		int check  = denominator * numerator;
		if( numerator%denominator == 0 ){
            cout<<numerator/denominator<<endl;
		}
		else
            if(check >= 0) {
                cout<<abs(this->numerator)/this->ucln() <<"/" <<abs(this->denominator)/this->ucln() <<endl;
            }
            else
                cout<< "-"<< abs(this->numerator)/this->ucln()  <<"/" << abs(this->denominator)/this->ucln() <<endl;
	}
	double value(){
        return 1.0*this->numerator/this->denominator;
	}
    Fraction sum( Fraction f ) {
		this->numerator = this->numerator * f.denominator + this->denominator * f.numerator;
		this->denominator = this->denominator * f.denominator;
		return *this;
	}
    Fraction product(Fraction f) {// nhan
		this->numerator = this->numerator * f.numerator   ;
		this->denominator = this->denominator * f.denominator;
		return *this;
	}
    Fraction division (Fraction f) {
		if( f.numerator == 0 ) {
			//return 0;
		}
		else {
			this->numerator = this->numerator * f.denominator   ;
			this->denominator = this->denominator * f.numerator;

		}
		return *this;
	}
    Fraction operator-(Fraction &f){
        this->numerator = this->numerator*f.denominator - this->denominator*f.numerator;
        this->denominator = this->denominator * f.denominator;
        return *this;
    }


    Fraction operator+( int b){
        Fraction f2(b,1);
        return this->sum(f2);
    }
//    Fraction  operator ++(){
//        Fraction f = *this;
//        *this = *this + 1;
//        return f;
//        ;
//    }


    friend istream &operator >> (istream &is, Fraction & f);
    friend ostream &operator<<(ostream &os , Fraction f);
    friend  Fraction operator -(Fraction f );
    friend Fraction operator ++ (Fraction &f);

};
 Fraction operator -(Fraction f ){
        f.numerator = - f.numerator;
        return f;
    }
bool operator<(int a, Fraction f){
        return a < f.value();
    }

Fraction  operator+(Fraction f1, Fraction f2){
        return  f1.sum(f2);
	}

Fraction operator/(Fraction f1, Fraction f2){
    return f1.division(f2);
}

Fraction operator*(Fraction f1, Fraction f2){
    return f1.product(f2);
}
Fraction operator ++ (Fraction &f){
    f = f + 1;
    *this = *this + 1;
    return f;
}

istream &operator >> (istream &is, Fraction &f)
{
    is>>f.numerator;
    do{
        is>>f.denominator;
     }
    while (f.denominator==0);

    return is;
}
ostream &operator<<(ostream &os , Fraction f){
    int check  = f.denominator * f.numerator;
		if(f.numerator % f.denominator == 0 ){
            return os<<f.numerator/f.denominator;
		}
        if(check >= 0) {
            return os<<abs(f.numerator)/f.ucln() <<"/" <<abs(f.denominator)/f.ucln();
        }
            return os<< "-"<< abs(f.numerator)/f.ucln()  <<"/" << abs(f.denominator)/f.ucln() ;
}

int main()
{
    Fraction f;
    cin >> f;
    cout << "f: " << f << endl;
    cout << "++f: " << ++f << endl;
    cout << "f: " << f << endl;
    cout << "f++: " << ++(++f) << endl;
    cout << "f: " << f;
    return 0;
}
