#include<iostream>
using namespace std;
int bai2(int a[], int len)
{
    int dem1 = 1;
    int dem2 = 0;
    int index = 0;
    for(int i = 0; i <len-1; i++)
    {
        if( a[i+1]-a[i] == 1)
        {
            dem1++;
        }
        else
        {   index = i;
            if(dem1 >= dem2)
            {
                dem2 = dem1;
            }
            dem1 = 1;
        }
    };
    cout<<index;
    return dem1 > dem2 ? dem1 : dem2;
}
void xuatmang(int a[], int len )
{
    for(int i = 0 ; i < len ; i++ )
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n ;
    cin>>n;
    if(n<2 ||n>1000)
    {
        cout<<"Loi";
    }
    else
    {
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cout<<"nhap tu a ["<<i<<" "<<"]"<<endl;
            cin>>a[i];
            if(a[i]<0||a[i]>1000)
            {
                cout<<"nhap lai a ["<<i<<" "<<"]"<<endl;
                cin>>a[i];
            }
        }
        cout<<bai2(a,n);
    }

}
