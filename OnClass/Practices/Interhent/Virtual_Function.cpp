#include<iostream>
using namespace std;

class Shape{
    private : int x , y;
    public : virtual void display(){
        cout<<x<<y<<endl;
    };
    virtual double area(){
        return 10;
    }
    void setXy(int x, int y){
        this->x = x;
        this->y = y;
    }

};
class Reactangle : public Shape{
    private : double weight , high;
    public :
    Reactangle(){

    }
    Reactangle(double a, double b){

        this->weight = a;
        this->high = b;

    }
        void display(){
            cout<<"Rectangle "<<this->weight<<"x"<<this->high<<endl;
        }
        double area(){
            return this->weight*high;
        }


};
class Circle :public Shape{
    private : double radius;
    public : double area(){
        return 3.14*radius*radius;
    };
    Circle(double a,double b, double c){
        this->radius =  a;
        setXy(a,b);
    }

    void display(){
            cout<<"Circle R= "<<this->radius<<endl;

        }
};
void report(Shape &sh){
    sh.display();
    cout<<"Area : "<<sh.area()<<endl;
}
void InputArrayShape(){


}
int main(){
    Shape s;
    Circle c(3,2,5);
    c.setXy(3,4);
    s = c;
    s.display();
}
