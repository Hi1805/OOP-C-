#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char c = 'A';
    ofstream fo("Data.txt",ios::out | ios::binary );
    fo.write(&c,1);

    int i = 67;

    fo.write((char*)&i,sizeof(i));
    cout<<"ghi file thanh cong"<<endl;
    fo.close();
    ifstream fi("Data.txt",ios::in | ios::binary );
    char a;
    int b ;
    fi.read((char*)&b,sizeof(b));
    fi.read(&a,1);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<< endl;
    fi.close();

}
