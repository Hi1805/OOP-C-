#include<iostream>
using namespace std;
class Employee{
    private : string name ;
              float salary;
    public :
        void setDetail(string name ,float salary ){
            this->name = name;
            this->salary = salary;
        }
        string getName(){
            return name;
        }
        void pay(){
            cout<<"pay "<<salary<<endl;
        }
};
class Worker : public Employee{
    private : int level;
    public :
        void doWork(){
        cout<<getName()<<" is working as a worker in level "<<level;
        }
        void setLevel(int l){
            level = l;
        }
};
int main(){
    Worker w;
    w.setDetail("huy",1000);
    cout<<"name "<<w.getName()<<endl;
    w.pay();
    w.setLevel(3);
    w.doWork();

}

