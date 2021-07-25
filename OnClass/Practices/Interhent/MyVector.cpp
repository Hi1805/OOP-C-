#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
using namespace std;
template <typename T>
class MyVector
{
     private:
        T* data_;
        int size_;
public :


    int size_type;

        class iterator
        {
            public:
                typedef iterator self_type;
                typedef T value_type;
                typedef T& reference;
                typedef T* pointer;
                typedef int difference_type;
                //iterator(pointer ptr) : ptr_(ptr) { }
                self_type operator++() { self_type i = *this; ptr_++; return i; }
                self_type operator++(int junk) { ptr_++; return *this; }
                reference operator*() { return *ptr_; }
                pointer operator->() { return ptr_; }
                bool operator==(const self_type& rhs) { return ptr_ == rhs.ptr_; }
                bool operator!=(const self_type& rhs) { return ptr_ != rhs.ptr_; }
            private:
                pointer ptr_;
        };



        T& operator[](size_type index)
        {
            assert(index < size_);
            return data_[index];
        }


        iterator begin()
        {
            return iterator(data_);
        }

        iterator end()
        {
            return iterator(data_ + size_);
        }

     void push_back(const T& value){
        if(size_ == 0)
        {
           data_ = new T[++size_];
        }
        else
        {
            T *pB = new T[++size_];
            for(int i = 0 ; i < size_ - 1 ; i ++ )
            {
                pB[i] = data_[i];

            }
            delete [] data_;
            data_ = pB;
        }
        data_[size_ - 1] = value;
    }
     MyVector()
    {
        size_ = 0;
        data_= nullptr;
    }

};


int main()
{
//    MyVector<double> vt1;
//    vt1.push_back(11);
//     vt1.push_back(12);
//      vt1.push_back(13);
//
//
//    for(MyVector<double>::iterator i = vt1.begin(); i != vt1.end(); i++)
//    {
//        cout<<*i<<" ";
//    }

    cout<<"huy";

    return 0;
}
