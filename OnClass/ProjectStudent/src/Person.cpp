#include "Person.h"
#include<string>
using namespace std;
Person::Person()
{
    age =1;
}
Person::Person( int age ){
    age = age;
}
string Person::check(){
    if(age > 18 ){
        return "husband";
    }
}

