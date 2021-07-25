++++++++++++++++++++#include <iostream>
using namespace std;
void inputMatrix(int a[100][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    	for(int j = 0; j < n; j++){
    		do{
    			cin>>a[i][j];
			}while(a[i][j] < 0 || a[i][j] > 1000);
		}
}
void displayMatrix(int a[100][100], int m, int n)
{
    for(int i = 0; i < m; i++){
		cout<<endl;
    	for(int j = 0; j < n; j++){
    		if(j < n-1)
    			cout<<a[i][j]<<" ";
    		else
    			cout<<a[i][j];
		}
    }
}
int main() {
    int m, n;
    int arr[100][100];
    cin >> m >> n;
    inputMatrix(arr, m, n);
    displayMatrix(arr, m, n);
    return 0;




    a[1][1] = 123;

    cout << a[1][1];
    cout<< a[0][101];



    int a[3][3] = {}; m = 3 , n = 3 ;
    i = 0 ; j = 0;
            a[0][0] = a[0][0];
            a[0][1] = a[0][1];
            a[0][2] = a[0][2];
            a[1][0] = a[0][3];
            a[1][1] = a[0][4];
            a[1][2] = a[0][5];
            a[2][0] = a[0][6];
            a[2][1] = a[0][7];
            a[2][2] = a[0][8];
}
