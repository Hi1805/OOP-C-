#include<iostream>
using namespace std;
template <typename T >
void  iSwap(T &x , T &y ){
    T c = x;
    x = y;
    y = c;

}
template <typename T >
T iMax(T x , T y){
    return (x > y ) ? x : y;
}
template <typename T >
T iMax(T const *x , int n){
    char max = x[0];
    for(int i = 1 ; i<n ; i++){
        max = iMax(max,x[i]);
    }
    return max;
}
template <typename T >
T iMax(T x, T y , T z ){
    T temp = x > y ? x : y;
    return temp > z ? temp : z;
}
//template<>

int main(){

    int a = 1, b  = 2;
    iSwap<int>(a,b);
    cout<<"a :"<< a << endl;
    cout<<"b :"<< b <<endl;

    string s1 = "ABC",s2 ="xyz";
    iSwap(s1,s2);
    cout<<"s1 :"<<s1<<endl;
    cout<<"s2 :"<<s2<<endl;

    cout<<"int "<<iMax<int>(10,20)<<endl;
    cout<<"char "<<iMax('T','V')<<endl;
    cout<<"C-String :" <<iMax<char>("DU",3)<<endl;
    cout<<"iMax "<<iMax<double>(1.5,2.1,3.14);
     return 0;

}
