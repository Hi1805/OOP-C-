#include<iostream>
#include<vector>
#include<list>
using namespace std;

//void sortGiamDan(int arr[], int n){
// for(int i = 0 ; i < n ; i ++ ){
//        for(int j = i + 1 ; j < n ; j++){
//            if(arr[i] > arr[j])
//                swap(arr[i],arr[j]);
//        }
//    }
//}
template <class T>
void display(T pBegin , T pEnd){
    T p = pBegin;

    while(p != pEnd ){
        cout<<(*p)<<" ";
        p++;
    }
    cout<<endl;
}
bool checkOddOrEven(int x ,int y){
    if(x % 2 == 0 ){
        if(y % 2 == 1)
            return false;
        return x > y;
    }
    // neu la x la le
        if(y % 2 == 0){
            return true;
            return x > y ;
        }
}
//(arr, arr + n)
sort(int arr[], int n, bool (*tmp)(int , int)){
    for(int i = 0 ; i < n ; i ++ ){
        for(int j = i + 1 ; j < n ; j++){
            if((*tmp)(arr[i],arr[j]))
                swap(arr[i],arr[j]);
        }
    }
}
//template < class E >
//void sort (T pBegin , T pEnd ){
//    while()
//
//}
//void display(int arr[], int n){
//    for(int i = 0 ; i < n ; i++)
//        cout<<arr[i]<<" " ;
//    cout<<endl;
//}


int main(){
    int arr[5] = {2,9,3,7,4};
    int n = 5;
//    display(arr,n);
//    sort(arr,n,checkOddOrEven);

//
    vector<int>  :: iterator p ;
    list<int> ls;
    vector<int> vt
    for(int i = 0 ; i < n ; i++){
        vt.push_back(arr[i]);
        ls.push_back(arr[i]);
    }
//     display(arr,arr +n );
//     display(vt.begin(),vt.end());
//      display(ls.begin(),ls.end());
//    list <int>::iterator p = ls.begin();
//
//    while(p != ls.end()){
//        cout<<(*p)<<" " ;
//        p++;
//    }

    cout<<*p;
}
