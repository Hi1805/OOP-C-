#ifndef PERSON_H
#define PERSON_H


#include<iostream>
#include<string>
#include<cstring>
#include<Date.h>
using namespace std;
class Person
{
protected:
    string firstName;
    string lastName;
    Date dob;
    bool gender;
    string address;
public:
    Person()
    {
        firstName = "Nguyen Van ";
        lastName = "Quoc";
    }

    string GetfirstName()
    {
        return firstName;
    }
    void SetfirstName(string val)
    {
        firstName = val;
    }
    string GetlastName()
    {
        return lastName;
    }
    void SetlastName(string val)
    {
        lastName = val;
    }
    Date Getdob()
    {
        return dob;
    }
    void Setdob(Date val)
    {
        dob = val;
    }
    bool Getgender()
    {
        return gender;
    }
    void Setgender(bool val)
    {
        gender = val;
    }
    string getAddress(){
        return this->address;
    }
    void setAddress(string add){
        this->address = add;
    }
    bool isName(string name)
    {
        for (int i = 0; i < name.length(); i++)
        {
            if(!isalpha(name[0]))
                return false;
        }
        return true;
    }
    bool isNumber(string number){

        for (int i = 0; i < number.length(); i++)
        {
            if(isalpha(number[0]))
                return false;
        }
        return true;
    }
    string format(string fullname)
    {
        string  name [fullname.length()] ;
        int length = 0;
        int begin  = -1;
        int end = 0 ;
        for(int i = 0 ; i < fullname.length(); i++ )
        {

            if(isalpha(fullname[i]) && begin == -1 )
            {
                begin =i;
            }
            if(isalpha(fullname[i]) &&( isspace(fullname[i+1]) || i == fullname.length() - 1))
            {
                end = i;
                string s = "";
                s = fullname.substr(begin,end - begin + 1);
                s[0] =  islower(s[0]) ? (s[0] - 32): s[0];
                for(int i = 1 ; i < s.length(); i++ )
                {
                    if(isupper(s[i]))
                        s[i] = s[i] + 32;
                }
                name[length] = s;
                length ++ ;
                begin = -1;
            }
        }
        string format = "";
        for(int i = 0; i< length-1 ; i++ )
        {
            format += name[i] + " ";
        }
        format += name[length - 1];
        return format;
    }

    void SetInputName(string sen , string &typeName  ){
         do
        {
            cout<<sen<<endl;
            getline(cin,typeName);
        }
        while(!isName(typeName));
        typeName = format(typeName);
    }
    friend istream& operator >>(istream &is , Person  &p1 );
    friend ostream& operator <<(ostream &is , Person  p1 );

};
//istream& operator >>(istream &is , Person  &p1 ){
//        p1.SetInputName("Please Enter First Name ",p1.firstName);
//        p1.SetInputName("Please Enter Last Name ",p1.lastName);
//
//        int choose;
//        do
//        {
//            cout<<"Please Enter your gender : 1/male 0/female"<<endl;
//            is>>choose;
//        }
//        while(choose != 1 && choose != 0);
//        p1.gender = choose;
//        cout<<"Please Enter Address " <<endl;
//        cin>>p1.address;
//        p1.address = p1.format(p1.address);
//        fflush(stdin);
//        cout<<"Please Enter Day Of Birth " <<endl;
//        is>>p1.dob;
//        return is;
//}
// ostream& operator <<(ostream &os , Person  p1 ){
//        os<<"Full Name :"<<p1.firstName<<" "<<p1.lastName<<endl;
//        os<<"Gender :"<<(p1.gender ? "male" : "female")<<endl;
//        os<<"Date Of Birth :"<<p1.dob;
//        return os;
// }

#endif // PERSON_H
