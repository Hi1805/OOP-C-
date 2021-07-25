#include<iostream>
using namespace std;
template < class E >
class MyDeque
{
private :
    int len ;
    E *pstr;
public :
    MyDeque()
    {
        len = 0;
        pstr = nullptr;
    }
    void push_front(const E& value)
    {
        if(len == 0)
        {
            pstr = new E[++len];
        }
        else
        {
            E *pB = new E[++len];
            for(int i = 0 ; i < len - 1 ; i ++ )
            {
                pB[i+1] = pstr[i];

            }
            delete [] pstr;
            pstr = pB;
        }
        pstr[0] = value;
    }
    void push_back(const E& value){
        if(len == 0)
        {
            pstr = new E[++len];
        }
        else
        {
            E *pB = new E[++len];
            for(int i = 0 ; i < len - 1 ; i ++ )
            {
                pB[i] = pstr[i];

            }
            delete [] pstr;
            pstr = pB;
        }
        pstr[len - 1] = value;
    }
    void pop_back(){
        if(len == 0 )
        {
            pstr = nullptr;
            len -- ;
        }
        else {
             E *pB = new E[ -- len];
            for(int i = 0 ; i < len ; i ++ )
            {
                pB[i] = pstr[i];
            }
            delete [] pstr;
            pstr = pB;
            cout<<"len =" <<len<<endl;
        }

    }
    E &operator[] ( int index ){
        return pstr[index];
    }
    int size(){
        return len;
    }

};
int main()
{
    int n;
    cin>>n;
    MyDeque<int> dq;
    for(int i = 0 ; i < n ; i ++ ){
        int vl;
        cin>>vl;
        dq.push_front(vl);
        dq.push_back(vl);
    }
    for(int i = 0 ; i < dq.size(); i ++ ){
       // dq.pop_back();
          cout<<dq[i]<<" ";
    }
    cout<<"size = "<<dq.size();

}
