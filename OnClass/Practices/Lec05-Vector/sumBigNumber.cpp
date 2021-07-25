#include <iostream>
#include <vector>
using namespace std;
void removeZero(vector<int> &vt){
    while(vt[vt.size()-1]==0 && vt.size()>1){
        vt.pop_back();
    }
}
vector<int> trans( string s){
    vector<int> vt ;
    for(int i = s.length()-1 ; i >= 0 ; i-- ){
        vt.push_back(s[i]-48);
    }
    //removeZero(vt);
    return vt;
}

string sumBigNumber(string a, string b)
{
    vector<int> vta = trans(a);
    vector<int> vtb = trans(b);

    int length = vta.size() > vtb.size() ? vta.size() : vtb.size();
    vta.resize(length);
    vtb.resize(length);
    string sum = "";
    int extra = 0 ; //so du
    int temp ;
    for(int i = 0; i< length ; i++ ){
        temp = vta[i] + vtb[i] + extra;
        sum = to_string(temp%10) + sum;
        extra =  temp/10;
    }
    if(extra>0){
        sum = to_string(extra)+sum;
    }
    return sum;
}
int main()
{
    string numA, numB;
    cin >> numA >> numB;
    cout << sumBigNumber(numA, numB);
    return 0;
}



