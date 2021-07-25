#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    int len;
    char* pStr;

public:
    MyString()
    {
        len = 0;
        pStr = nullptr;
    }
    MyString(const MyString& x)
    {
        len = x.len;
        pStr = new char[len];
        for (int i=0; i<len; i++)
            pStr[i] = x.pStr[i];
    }
    MyString(const char* x)
    {
        int l = 0;
        while(x[l]!='\0')
            l++;
        len = l;
        pStr = new char[len];
        for(int i=0; i<len; i++)
            pStr[i] = x[i];
    }
    void input()
    {
        char str[100];
        cin>>str;
        int l = 0;
        while( str[l]!= '\0')
            l++;
        len = l;
        pStr = new char[len];
        for(int i=0; i<len; i++)
            pStr[i] = str[i];
    }
    void display()
    {

        for(int i = 0 ; i < len ; i++ )
            cout<<pStr[i];
        cout<<endl;
    }
    int length()
    {
        return len;
    }
    MyString operator+(MyString s)
    {
        MyString rs;
        rs.len = this->len + s.len ;
        rs.pStr = new char[rs.len];
        for(int  i = 0 ; i <this->len ; i ++ )
        {
            rs.pStr[i] = this->pStr[i];
        }
        int j = 0;
        for(int  i = this->len  ; i <rs.len ; i ++ )
        {
            rs.pStr[i] = s.pStr[j];
            j++;
        }
        return rs;
    }
    MyString operator+(const char *x)
    {
        MyString s;
        int l = 0;
        while(x[l]!='\0')
            l++;
        s.len = this->len + l;
        s.pStr = new char[s.len];

        for(int i = 0 ; i < this->len ; i++ )
        {
            s.pStr[i] = this->pStr[i];
        }
        int j = 0;
        for(int  i = this->len   ; i <s.len ; i ++ )
        {
            s.pStr[i] = x[j];
            j++;
        }
        return s;
    }

    MyString & operator =(const MyString& x)
    {
        len = x.len;
        pStr = new char[len];
        for (int i=0; i<len; i++)
            pStr[i] = x.pStr[i];
        return *this;
    }
    MyString &operator = (const char * x)
    {
        int l = 0;
        while(x[l]!='\0')
            l++;
        len = l;
        pStr = new char[len];
        for(int i=0; i<len; i++)
            pStr[i] = x[i];
        return *this;
    }
    char& operator[] (const int& index)
    {
        return *(pStr  + index );
    }
    friend MyString operator+(const char *x, MyString s);
    friend istream& operator >> (istream& is, MyString &s);
    friend ostream& operator << (ostream &os, MyString &s);
    friend void getline(istream &is, MyString &s);


};
MyString operator + (const char *x, MyString s)
{
    MyString rs;
    int l = 0;
    while(x[l]!='\0')
        l++;
    rs.len = l + s.len;
    rs.pStr = new char[rs.len];
    for(int i=0; i< l; i++)
    {
        rs.pStr[i] = x[i];

    }

    int j = 0;
    for(int  i = l  ; i <rs.len ; i ++ )
    {
        rs.pStr[i] = s.pStr[j];
        j++;
    }
    return rs;
}

istream& operator >> (istream& is, MyString &s)
{
    char str[100];
    is>>str;
    int l = 0;
    while( str[l]!= '\0')
        l++;
    s.len = l;
    s.pStr = new char[s.len];
    for(int i=0; i<s.len; i++)
        s.pStr[i] = str[i];
    return is;
}
ostream& operator << (ostream &os, MyString &s)
{
    for(int i = 0 ; i < s.len ; i++ )
        os<<s.pStr[i];
    return os;
}
void getline(istream &is, MyString &s)
{
    char str[100];
    is.getline(str,100);
    s = str;
}
int main()
{    int a = 3;
      int &b  = a;
    MyString s1, s2;
    cin >> s1;
    do
    {
        getline(cin, s2);
    }
    while(s2.length() == 0);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2;

    return 0;
}


