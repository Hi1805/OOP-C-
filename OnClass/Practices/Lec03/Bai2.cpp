
#include <iostream>
using namespace std;
void myStrcpy(char destination[], char source[]){
    int length = 0;
    while(source[length]!='\0'){
        destination[length] = source[length];
        length++;
    }
    destination[length] = '\0';
}
int main() {
    char strA[100];
    char strB[] ="hello DTU";
    myStrcpy(strA,strB);
    cout<<"StrA "<<strA<<endl;
    cout<<"StrB "<<strB<<endl;
    return 0;
}
