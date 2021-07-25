#include <iostream>
#include<Math.h>
using namespace std;

class Date
{
  private :
    int day,month,year;
    int  maxDay(int month,int year)
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
public :
    Date( int day = 1 , int month = 1 , int year = 1900){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getDay()
    {
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }
    bool setDate(int day, int month, int year )
    {
        if(month > 12 || month < 1 )
        {
            cout<<"Invalid date"<<endl;
            return false;
        }

        if(day > maxDay(month,year)  || day < 1)
        {
            cout<<"Invalid date"<<endl;
            return false;
        }
        this->day = day;
        this->month = month;
        this->year  = year;
        return true;
    }

   int  dayOfTheYear(int day, int month,int year )
    {
        if(! setDate(day,month,year ))
        {
            return 0 ;
        }
        int sum = 0;
            for(int i = 1 ; i < month  ; i ++ )
            {
                sum += maxDay(i,year);
            }
        return  sum + day ;
    }
    void input()
    {
        do
        {
            cin>>day ;
            cin >> month;
            cin>> year;
        }
        while (!setDate(day,month,year));
    }
    void display()
    {
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
    int  differentDays( Date dt){
        int diff = abs(this->dayOfTheYear(this->day , this->month, this->year ) - dt.dayOfTheYear(dt.getDay(), dt.getMonth(),dt.getYear()));
        if(dt.year == this->year)
            return diff;
        long sum = 0;
        int tempYear = this->year;
        int maxYear = dt.year;
        if(this->year > dt.year){
            tempYear = dt.year;
            maxYear = this->year;
        }
        for(int i = maxYear ;i> tempYear ; i--){
            sum += dayOfTheYear(31,12,i);
        }
        return sum + diff - 1 ;
    }
};
int main()
{
    Date dt1;
   //cout<< dt1.dayOfTheYear(31,12,2008);
    Date dt2(20, 10, 2001);
    Date dt3;
    Date dt4;

    dt3.input();
    dt4.input();

    dt1.display(); // 1-1-1900
    dt2.display(); // 20-10-2001
    dt3.display();
    dt4.display();

    cout << dt3.differentDays(dt4);

    return 0;
}
