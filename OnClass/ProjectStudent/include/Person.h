#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
    public:
        Person();
        Person( string name ,int age );
    private:
        string name ,id ;
};

#endif // PERSON_H
