#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n;
    cin>>n;
    deque<int> dq;
    for(int i = 0 ; i < n ; i ++ ){
        int vl;
        cin>>vl;
        dq.push_front(vl);
        dq.push_back(vl);
    }

    for(int i = 0 ; i < dq.size(); i ++ )
        cout<<dq[i]<<" ";

}
