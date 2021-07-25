#include <iostream>
using namespace std;

void inputMatrix(int  A[][m],  int m,  int n)
{
    for(int i = 0; i < m*n; i++){
            cin>>A[0][i];
    }
}
//void displayMatrix (int a[100][100], int m  , int n ){
//      int dowLine = 1;
//      for(int i = 0 ; i < m*n ; i ++ ){
//            if(n > dowLine){
//                 cout<<a[0][i] <<" ";
//                 dowLine ++ ;
//            }
//            else{
//                cout <<a[0][i] ;
//                if(i <m*n - 1 ){
//                    cout << endl;
//                    dowLine = 1 ;
//                }
//            }
//      }
//}

void output (int a[][100] , int  m , int n ) {

}
int main(){
	int **a, m,n;     //int a[10][10]; cout<<"\n Nhap so dong:"; cin>>m; cout<<"\n Nhap so cot:"; cin>>n; a= new int*[m];
	 cin >> m >> n ;
	for(int i=0; i<m; i++) 
		a[i]= new int [n]; 
	inputMatrix(a,m,n);

   
//    int  a[2][2] = {};
//    inputMatrix(a,m,n);
//    displayMatrix(a,m,n);



}
