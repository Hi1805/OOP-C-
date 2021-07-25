#include <iostream>
#include <string>
using namespace std;

class Student
{
private :
    string fullname,id,address;
    static string lower(string s)
    {
        for(int i = 0 ; i < s.length() ; i++)
        {
            if( 'A' <= s[i] && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }

    static string format(string s)
    {
        int begin = -1;
        int end = -1;
        for (int i = 0 ; i < s.length() ; i++ )
        {
            if( s[i] != ' ' && begin == -1 )
            {
                begin = i;
            }
            if(s[i] != ' ')
            {
                end = i;
            }
        }

        s= s.substr( begin, (end +1 - begin));


        s = lower(s);
        if( s[0] < '0' || s[0] > '9' )
        {
            s[0] = s[0]-32;
        }

        string s2 = "";
        for(int i =0 ; i < s.length() ; i++)
        {
            if( s[i] != ' ')
            {
                s2 += s[i];
            }
            if(s[i] == ' ' && s[i+1] != ' ')
            {
                s2 += s[i];
                if( s[i+1] < '0' || s[i+1] > '9' )
                {
                    s[i+1] = s[i+1] - 32 ;
                }
            }
        }

        return s2;
    }

public :


    void  setDetail(string id , string fullName,string  address){
            this->id = id;
            this->fullname = format(fullName);
            this->address = format(address);
    }
    string getId(){
        return this->id;
    }
    string getFullName(){
        return this->fullname;
    }
    string getAddress(){
        return this->address;
    }
};
int main()
{

    Student st;
    string fullName;
    string id;
    string address;

    getline(cin, id); // Student id
    getline(cin, fullName); // Student full name
    getline(cin, address); // The address of the student

    st.setDetail(id, fullName, address);

    cout << "Student id: " << st.getId() << endl;
    cout << "Full name: " << st.getFullName() << endl;
    cout << "Address: " << st.getAddress() << endl;
    return 0;
}
