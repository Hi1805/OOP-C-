#include <iostream>
using namespace std;
int main()
{
    int *pN;
    pN = new int;
    cin >> *pN;
    long long* pArr = nullptr;
    pArr = new long long [ *pN ];

    // Input elements
    for(int i=0; i<*pN; i++){
        cin >> *(pArr + i); // pArr[i]
    }
    // Display elements
    for(int i=0; i<*pN; i++){
        cout << *(pArr + i); // pArr[i]
        if ( i != *pN - 1 )
            cout << " ";
    }
    return 0;
}
