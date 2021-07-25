#include <iostream>
#include <cstring>
using namespace std;
//long long *getFibonaccis(long long p)
//{
//    long long *arr  = new long long [p];
//    arr[0] = 0;
//    if(p == 1){
//        return arr;
//    }
//    arr[1] = 1;
//    long long f1 = 0, f2=1,f3 = 0;
//    for(int i  = 2 ; i< p ; i ++ ){
//            f3 = f2 + f1;
//            f1 = f2;
//            f2 = f3;
//            arr[i] = f3;
//    }
//    return arr;
//}
//void display(long long *arr , int n)
//{
//    for(int i = 0 ; i < n ; i++ ){
//        cout<< * (arr + i)<<endl;
//    }
//}
int main()
{

    cout<<0<<" ";
    cout<<1<<" ";
    int f1 = 0, f2 = 1 , f3 = 0;
    for(int i  =  2; i < 10 ; i ++ ){
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
            cout<<f3<<" ";
    }
    return 0;
}
//#include <iostream>
//using namespace std;
//
//_____ getPrimes(_____)
//{
//    _____
//}
//void display(_____)
//{
//    _____
//}
//int main()
//{
//    int *pN = nullptr; // null
//    _____
//    long long* pArr = getPrimes(*pN);
//    display(pArr, *pN);
//    _____
//    return 0;
//}#include <iostream>
//using namespace std;
//
//______ getSymmetricalNumbers(______)
//{
//    ______
//}
//______ display(______)
//{
//    ______
//}
//int main()
//{
//    int *pN = nullptr; // null
//    ______
//    long long* pArr = getSymmetricalNumbers(*pN);
//    display(pArr, *pN);
//    ______
//    return 0;
//}

