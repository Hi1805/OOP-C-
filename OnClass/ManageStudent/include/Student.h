#ifndef STUDENT_H
#define STUDENT_H

#include <Person.h>


class Student : public Person
{
public:
    Student(){

    };
//    virtual ~Student(){
//
//    };

     string GetcodeID()
    {
        return codeID;
    }
    void SetcodeID( int val)
    {
        codeID = val;
    }
   double GetavgMark()
    {
        return avgMark;
    }
    void SetavgMark( double val)
    {
        avgMark = val;

    }
    friend istream& operator >>(istream &is , Student &p1 );
    friend ostream& operator <<(ostream &is , Student  p1 );

private:
    string codeID;
    double avgMark;
};
// istream& operator >>(istream &is , Student &st ){
//    Person *p = &st;
//    is>>*p;
//    cout<<"Please Enter average Mark " <<endl;
//    is>>st.avgMark;
//    fflush(stdin);
//    do{
//          cout<<"Please Enter Code ID "<<endl;
//          cin>>st.codeID;
//    }
//    while(!p->isNumber(st.codeID));
//    st.codeID ="S"+st.codeID;
//    return is;
//
//}
// ostream& operator <<(ostream &os , Student st ){
//    Person *p = &st;
//    os<<*p<<endl;
//    os<<"average Mark:" <<st.avgMark<<endl;
//    os<<"Code ID :"<<st.codeID;
//    return os;
//}
#endif // STUDENT_H
