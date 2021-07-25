#include<iostream>
using namespace std;
int date(int day,int month,int year){
	for(int i = 0;i<month;i++){
    	if(i==1 ||i ==3 || i==5||i==7 ||i==8||i==12){
        	day = day+31;
        }
      	else
      		if(i==4||i==6||i==9||i==11)
              day = day + 30;
      		else
              if(year%400==0||(year == 0 && year % 100 != 0))
                day = day + 29;
      		else day = day + 28;
}
return day;
}
int main(){
int day,month,year;
  cin>>day;
  cin>>month;
  cin>>year;
  cout<<date(day,month,year);
}
