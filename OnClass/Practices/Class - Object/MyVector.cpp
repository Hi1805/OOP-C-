#include<iostream>
using namespace std;
class IntVector{
    private :
        int len ;
        int* pArr;
    public:
       ~ IntVector(){
            if(len == 0)
                delete [] pArr;
        }

        IntVector(){
            len = 0;
            pArr = nullptr;
        }
        IntVector(int n , int value){
            len = n;
            pArr = new int[n];
            for(int i = 0 ;i < n;i++){
                pArr[i] = value;
            }
        }
        IntVector( const IntVector& vt){
            this -> len = vt.len;
            pArr = new int [len];
            int* pVt = vt.pArr;
            for( int i = 0 ; i < len ; i++ ){
                *(pArr + i) = *(pVt +i);
        }

    };

        void  push_back(int value){
            if(len == 0 ){
                 pArr = new int[++len];
                *pArr = value;
            }
            else{
                int *pBrr = new int [++len];
                for(int i = 0 ; i< len - 1; i++)//
                    *(pBrr + i ) = *(pArr + i);

                delete []pArr;
                pBrr[len-1] = value;
                pArr = pBrr;
            }
        }
        void pop_back(){
            if(len  ==  0){
               return  ;
            }
            if(len == 1){
                pArr = nullptr;
                len--;
                return ;
            }
            int *pBrr = new int[--len];
            for(int i = 0 ; i< len; i++)
                *(pBrr + i ) = *(pArr + i);
            delete []pArr;
            pArr = pBrr;
        }


        void display(){
            for(int i = 0 ; i<len-1 ; i++){
                cout<<pArr[i]<<" ";
            }
            cout<<pArr[len-1];
            cout<<endl;
        }

        IntVector operator = ( const IntVector &vt){
            delete []pArr;
            this -> len = vt.len;
            pArr = new int [len];
            int* pVt = vt.pArr;
            for( int i = 0 ; i < len ; i++ )
                *(pArr + i) = *(pVt +i);
            return *this;
        }
};
int main()
{

    IntVector vt1(4,2); // 8 8 8 8
    IntVector vt2;
    IntVector vt3;
    vt2 = vt3 = vt1;
    vt2.display();
    return 0;
}
