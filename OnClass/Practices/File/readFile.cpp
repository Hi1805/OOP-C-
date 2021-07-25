#include<iostream>
#include<fstream>
using namespace std;
void readFile (ifstream &f ){
    if(!f.is_open())
        cout<<"The File doesn't not exist";
    else {
        while(!f.eof()){
            double x; f>>x;
            if(!f.fail())
                cout<<x<<endl;
        }
    }
    f.close();
}
void writeFile(ofstream &fo){
    int n ; cin>>n;
    for(int i = 0 ; i < n ; i ++ ){
        int value ;
        cin>>value;
         fo<<value<<" ";
    }
    out<<"Doc file thanh cong " <<endl;
    fo.close();
}
int main(){
    ofstream fo("Data.txt");
   ifstream fi("Data.txt");
   readFile(fi);
//    int n2;
//    fi>>n2;
////    cout<<"n2 = "<<n2<<endl;
//    cout<<"Noi Dung file " <<endl;
//    for(int i = 0 ; i < n2 ; i++ ){
//        int value ; fi>>value;
//        cout<<value<<endl;
//    }
//    fi.close();
}
