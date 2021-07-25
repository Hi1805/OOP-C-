#ifndef DATE_H
#define DATE_H

#include<iostream>
using namespace std;
class Date
{
public:
    Date(int day = 1, int month = 1 , int year = 1990){

    }

    int Getday()
    {
        return day;
    }
    void Setday(int val)
    {
        day = val;
    }
    int Getmonth()
    {
        return month;
    }
    void Setmonth(int val)
    {
        month = val;
    }
    int Getyear()
    {
        return year;
    }
    void Setyear(int val)
    {
        year = val;
    }
    static int maxDay(int day, int month, int year)
    {
        if(month == 12  || month == 3  || month == 5 || month == 7 || month == 8 || month == 10  || month == 1 )
            return 31 ;
        if(month == 2 )
        {
            if( (year % 4 == 0 &&  year % 100 !=0  ) ||year % 400 == 0  )
            {
                return 29;
            }
            return 28;
        }
        return 30;
    }
      bool setDate(int day, int month, int year )
    {
        if(month > 12 || month < 1 )
        {
            return false;
        }

        if(day > maxDay(day,month,year)  || day < 1)
        {
            return false;
        }
        this->day = day;
        this->month = month;
        this->year  = year;
        return true;
    }
    friend istream& operator >>(istream &is , Date  &p1 );
    friend ostream& operator <<(ostream &is , Date  p1 );


private:
    int day;
    int month;
    int year;
};
istream& operator >>(istream &is , Date &p1 ){
        do{
            cout<<"please Enter day : "<<endl;
            is>>p1.day;
            cout<<"please Enter month: "<<endl;
            is>>p1.month;
            cout<<"please Enter year : "<<endl;
            is>>p1.year;
        }while(!p1.setDate(p1.day,p1.month,p1.year));
        return is;
}
ostream& operator <<(ostream &os , Date  p1 ){
   return  os<<p1.day<<"/"<<p1.month<<"/"<<p1.year;
}
#endif // DATE_H
