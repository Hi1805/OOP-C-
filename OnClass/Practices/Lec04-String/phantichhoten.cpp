#include <iostream>
#include <string>
using namespace std;
string printWords(string name ){
   for(int i= 1; i < name.length();i++){
      if(name[i]>=65 && name[i]<=90)
         name[i]= name [i]+32;
   }
   if(name[0] >= 97){
        name[0]-= 32;
   }
   return name;
}
void split(string fullname ){
    string surname;
    string name;
    string bufferName;
    int begin = -1;
    int begin2 = 0;
    int end = 0;

    int i = 0;
    while(!isspace(fullname[i])){
        surname  += fullname[i];
        begin = i;
        i++;
    }

    int length = fullname.length();

    while(!isspace(fullname[length - 1])){
        length --;
    }
    name = fullname.substr(length ,fullname.length());
    bufferName = fullname.substr(begin+2,length-begin-2);

    cout<<printWords(surname)<<endl;
    cout<<printWords(name)<<endl;
    cout<<printWords(bufferName);
}

int main(){
    string s = "";
    getline(cin,s);
    split(s);
}
