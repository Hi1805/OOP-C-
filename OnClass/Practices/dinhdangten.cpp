#include <iostream>
#include <string>
using namespace std;

string format(string fullname)
{   string  name [fullname.length()] ;
    int length = 0;
    int begin  = -1;
    int end = 0 ;
    for(int i = 0 ; i < fullname.length(); i++ ){

        if(isalpha(fullname[i]) && begin == -1 ){
                begin =i;
        }
        if(isalpha(fullname[i]) &&( isspace(fullname[i+1]) || i == fullname.length() - 1)){
                end = i;
                string s = "";
                s = fullname.substr(begin,end - begin + 1);
                s[0] =  islower(s[0]) ? (s[0] - 32): s[0];
                for(int i = 1 ; i < s.length(); i++ ){
                    if(isupper(s[i]))
                        s[i] = s[i] + 32;
                }
                name[length] = s;
                length ++ ;
                begin = -1;
        }
    }
    string format = "";
    for(int i = 0; i< length-1 ; i++ ){
        format += name[i] + " ";
    }
    format += name[length - 1];
    return format;
}
int main()
{
    string fullName;
    getline(cin, fullName);
    cout << format(fullName);
   return(0);

}
