#include<iostream>
using namespace std;
class Date{

    private : int day, month,year;

    public :
        Date(int day = 1  , int month = 1 , int year = 2000){
            this->day = day ;
            this->month = month;
            this->year = year;
        }
//        Date( const Date &dt){
//            this->day = dt.day;
//            this->month = dt.month;
//            this->year = dt.year;
//        }
        void input(){
            cin>>day>>month>>year;
        }
        void display(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }

};
int main(){
    Date dt2;
    Date dt1 = dt2;


    dt2.display();
    return 0;
}
