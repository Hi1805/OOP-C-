#include<iostream>
using namespace std;
class Camera{
    private : string brand ;
    public :
        Camera(){}
        Camera(string brand ){
            this->brand = brand;
        }
        void takePhoto(){
            cout<<"Take Photo"<<endl;
        };
        void setBrand(string brand ){
             this->brand= brand;
        }
        string  getBrand(){
            return this->brand;
        }

};
class Phone{
    private : string brand ;
    public :
            Phone(){}
            Phone(string p){
                this->brand = p;
            }
            void call( string s){
                cout<<"call "<<s<<endl;
            };
            void setBrand(string s){
                this->brand = s;
            }
            string getBrand(){
                return brand;
            }
};

class cellPhone : Phone,Camera{
    public :
        cellPhone():Phone(){

        }
        cellPhone(string brandP, string brandC):Phone(brandP),Camera(brandC){

        }
        void setBrand (string s){
            Phone::setBrand(s);
       };
    string  getBrand(){
        return Phone::getBrand();
    }
    void setCameraBrand(string s){
            Camera::setBrand(s);
    }
    string getCameraBrand(){
         return   Camera::getBrand();
    }
};
int main(){
    Phone pn("viettel");
    cout<<"#1 :"<<pn.getBrand()<<endl;//viettel
    Camera cmr("cannon");
    cout<<"#2 :"<<cmr.getBrand()<<endl;
    cellPhone cp ("vsmart","sony");
    cout<<"#3 : "<<cp.getBrand()<<endl;// Vsmart
    cout<<"#4 : "<<cp.getCameraBrand();
}
