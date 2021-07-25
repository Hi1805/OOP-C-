#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<long long> input()
{   vector<long long>  vt;
    unsigned int n;
    cin>>n;
    for(int i = 0 ; i <  n ; i++ ){
        long long x;
        cin>>x;
        vt.push_back(x);
    }
    return vt;
}

void display(vector<long long> vt)
{
    for(int i = 0; i <vt.size()-1; i++){
            cout<<vt[i]<<" ";
     }
     cout<<vt[vt.size()-1];
}
vector<long long> sortElements(vector<long long> vt)
{
    sort(vt.begin(),vt.end());
    return vt;
}
int main()
{
    vector<long long> vt;
    vt = input();
    vt = sortElements(vt);
    display(vt);
    return 0;
}
