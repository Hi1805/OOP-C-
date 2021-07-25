#ifndef TEACHER_H
#define TEACHER_H
#include"Date.h"
#include<Person.h>
class Teacher : public Person
{
public:
    Teacher();
    virtual ~Teacher();

    string Getid()
    {
        return id;
    }
    void Setid(string val)
    {
        id = val;
    }
    string Getpassword()
    {
        return password;
    }
    void Setpassword(string val)
    {
        password = val;
    }
    string Getusername()
    {
        return username;
    }
    void Setusername(string val)
    {
        do{
            cout<<"Please Enter UserName ";
            cin>>val;
        }while(val.length() >5);
        this->username = val;
    }
    friend istream& operator >>(istream &is , Teacher &p1 );
    friend ostream& operator <<(ostream &is , Teacher  p1 );

private:
    string id;
    string password;
    string username;
};
// istream& operator >>(istream &is , Teacher &tc ){
//    Person *p = &tc;
//    is>>*p;
//    cout<<"Please Enter User Name " <<endl;
//    is>>tc.username;
//    fflush(stdin);
//    string confirmPassword;
//    do{
//        cout<<"Please Enter Password " <<endl;
//        cin>>tc.password;
//        cout<<"Please Enter Confirm Password " <<endl;
//        cin>>confirmPassword;
//        if(confirmPassword != tc.password){
//            cout<<"Confirm Password is incorrect\nPlease Enter again"<<endl;
//        }
//    }while(confirmPassword != tc.password);
//    do{
//          cout<<"Please Enter Code ID "<<endl;
//          cin>>tc.id;
//    }
//    while(!p->isNumber(tc.id));
//    tc.id  ="TC"+tc.id;
//    return is;
// }

#endif // TEACHER_H
