

#include <iostream>
using namespace std;
class Date {
  private :
    int day,month,year;
    int  maxDay(int month,int year){
        if(month == 12  || month == 3  || month == 5 || month == 7 || month == 8 || month == 10  || month == 1 )
            return 31 ;
        if(month == 2 ){
            if( (year % 4 == 0 &&  year % 100 !=0  ) ||year % 400 == 0  ){
                return 29;
            }

            return 28;
        }
        return 30;
    }
  public :
  	int getDay(){
    	return this->day;
    }
  	int getMonth(){
    	return this->month;
    }
  	int getYear(){
    	return this->year;
    }
	bool setDate(int day , int month , int year ){
    	if(month > 12 || month < 0)
            return false;
      	if(day > maxDay(month,year)  || day < 0 )
            return false;
      	this->day = day;
      	this->month = month;
      	this->year  = year;
      	return true;
    }
    int dayOfTheYear(){
        if(! setDate(day,month,year )){
            return 0 ;
        }
        int sum = 0;
        for(int i = 1 ; i < this->month  ; i ++ ){
            sum += maxDay(i,this->year);
        }
        return sum + this->day ;
    }

    bool input(){
        cin>>day ;
        cin >> month;
        cin>> year;
        return setDate(day,month,year);
    }
    void display(){
        if(! setDate(day,month,year )){
            cout<<"Invalid date";
        }
        else
            cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
};
int main()
{
    Date dt;
    dt.input();
    dt.display();
    cout << dt.dayOfTheYear();
    return 0;
}
