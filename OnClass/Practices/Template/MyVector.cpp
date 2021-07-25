#include<iostream>
using namespace std;
template <typename T >
class MyVector
{
private :
    int len;
    T* pt;
public :
    MyVector()
    {
        len = 0;
        pt = nullptr;
    }
    MyVector(int n)
    {
        len = n;
        pt = new T [len];
        for(int i = 0 ; i < n ; i++)
        {
            pt[i] = 0;
        }
    }
    MyVector(int n, T value)
    {
        len = n;
        pt = new T [len];
        for(int i = 0 ; i < n ; i++)
        {
            pt[i] = value;
        }
    }
    void push_back(const T& value){
        if(len == 0)
        {
            pt = new T[++len];
        }
        else
        {
            T *pB = new T[++len];
            for(int i = 0 ; i < len - 1 ; i ++ )
            {
                pB[i] = pt[i];

            }
            delete [] pt;
            pt = pB;
        }
        pt[len - 1] = value;
    }
    int length()
    {
        return this->len;
    }
    T &operator [](int index)
    {
        return pt[index];
    }
    bool setAt(int index, T value)
    {
        if(index < 0 || index >= len)
            return false;
        pt[index] = value;

        return true;
    }
    class MyIterator
    {
    private :
        int* p;
    public:
        MyIterator(int* x) :p(x) {}
        MyIterator(const MyIterator& mit) : p(mit.p) {}
        begin(){
            return *pt;
        }
        MyIterator& operator++()
        {
            ++p;
            return *this;
        }
        MyIterator operator++(int)
        {
            MyIterator tmp(*this);
            operator++();
            return tmp;
        }
        bool operator==(const MyIterator& rhs) const
        {
            return p==rhs.p;
        }
        bool operator!=(const MyIterator& rhs) const
        {
            return p!=rhs.p;
        }
        int& operator*()
        {
            return *p;
        }
    };
    MyIterator begin ()
    {
        return MyIteratorbegin();
    }

};
int main(){
    MyVector<int> v1;
    v1.push_back(1);
    cout<<*v1.begin();
}

