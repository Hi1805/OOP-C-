#include <iostream>
#include <string>
using namespace std;
class Date {
    public :
        static bool isLeap( int year){
            if( ( year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                return true;
            }
            return false;
        }
        int daysInMonth( int month , int year){

            switch( month ){
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            case 1 :
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 2 :
                if( isLeap( year )){
                    return 29;
                }
                return 28;
            default: return -1;

            }
        }
        bool setDate( int dd, int month, int year ){
            if( month < 1 || month >12 ){
                return false;
            }
            if( dd < 1 || dd > daysInMonth( month, year )){
                return false;
            }
            if ( year <= 0){
                return false;
            }
            this -> day = dd;
            this -> month = month;
            this -> year = year;
            return true;
        }
        int getDay(){
            return this -> day;
        }
        int getMonth(){
            return this -> month;
        }
        int getYear(){
            return this -> year;
        }
        void input(){
            int day, month, year;
            do{
                cin>> day >> month >> year;
            }while( !setDate( day, month, year ) );
        }
        void display(){
            cout << "Birth date: " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
        }

    private :
        int day, month, year;

};
class Student
{
    public :
        static string lower(string s){
             for(int i = 0 ; i < s.length() ; i++){
                if( 'A' <= s[i] && s[i] <= 'Z'){
                    s[i] = s[i] + 32;
                }
             }
             return s;
        }

        static string format(string s)
        {
            int begin = -1;
            int end = -1;
            for (int i = 0 ; i < s.length() ; i++ ){
                if( s[i] != ' ' && begin == -1 ){
                    begin = i;
                }
                if(s[i] != ' '){
                    end = i;
                }
            }

            s= s.substr( begin, (end +1 - begin));


            s = lower(s);
            if( s[0] < '0' || s[0] > '9' ){
                s[0] = s[0]-32;
            }

            string s2 = "";
            for(int i =0 ; i < s.length() ; i++){
                if( s[i] != ' '){
                    s2 += s[i];
                }
                if(s[i] == ' ' && s[i+1] != ' '){
                    s2 += s[i];
                    if( s[i+1] < '0' || s[i+1] > '9' ){
                        s[i+1] = s[i+1] - 32 ;
                    }
                }
            }

            return s2;
        }

        string firstName( string s){
            int a = -1;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == ' ' ){
                    a = i;
                    break;
                }
            }
            return s.substr( 0 , a);
        }

        string lastName( string s){
            int a = -1;
            for(int i = s.length(); i > 0; i--){
                if(s[i] == ' ' ){
                    a = i;
                    break;
                }
            }
            return s.substr( a+1 , s.length() - a);
        }

        bool setDetail( string id, string fullName, string address){
            fullName = format( fullName );
            address = format( address );

            this -> id = id;
            this -> fullName =  fullName;
            this -> address = address;
        }

        string getId(){
            return this -> id;
        }

        string getFullName(){
            return this -> fullName;
        }

        string getAddress(){
            return this -> address;
        }


        void input(){
            string fullName;
            string id;
            string address;
            Date dob ;

            getline(cin, id); // Student id
            getline(cin, fullName); // Student full name
            this -> dob.input();
            cin.ignore();
            getline(cin, address); // The address of the student

            setDetail( id, fullName, address );
        }

        void display(){

            cout << "Full name: " << getFullName() << endl;
            cout << "First name: "<< firstName( getFullName() ) << endl;
            cout << "Last name: "<< lastName( getFullName() ) << endl;
            this -> dob.display();
            cout << "Address: " << getAddress() << endl;
        }


    private :
        string id = "";
        string fullName = "";
        string address = "";
        Date dob ;
};
int main()
{
    Student st;
    st.input();
    st.display();
    return 0;
}
