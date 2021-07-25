#include<iostream>
using namespace std;
	
	// DEM THU TU NGAY TRONG NAM
	
bool check(int day,int month,int year){	
	if(day<=0||month<=0||year<=0||day>31||month>12)
		return false;
	return  true;
}
	
int maxDay(int month, int year) {
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		return 31;
	else
		if(month==4||month==6||month==9||month==11)
			return 30;
		else
			if((year%4==0 && year%100!=0)||year%400==0)
				return 29;
			else
				return 28;
}

int countDay(int day, int month, int year){
	int count = 0;
	for(int i = 1; i < month; i++){
		cout<<"month: "<<month;
		cout<<"year: "<<year;
		count += maxDay(i, year);
		cout <<"count: "<<count<<endl;
	}
	
	return count += day;
}

int main(){
	int day, month, year;
	cin>>day;
	cin>>month;
	cin>>year;
	if(check(day, month, year)){
			cout<<countDay(day, month, year);		
	}

	return 0;
}
