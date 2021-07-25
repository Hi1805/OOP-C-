#include <iostream>
using namespace std;

bool isSymmetricalString(char line[])
{
    int length = 0;
    while(line[length]!='\0')
        length++;
    int j = length-1;
    for(int i = 0 ; i<length/2 ; i++ ){
        if(line[i] != line[j])
            return false;
        j--;
    }
    return true;
}
int main() {
    char line[201];
    cin.getline(line, 201);
   if (isSymmetricalString(line))
      cout << "YES";
  else
       cout << "NO";
    return 0;
}
