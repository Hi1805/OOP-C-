#include <iostream>
using namespace std;

int iGetLen(char line[])
{
    int length =0, i=0;
    while(line[i] != '\0'){
        length ++;
        i++;
    }
    return length;
}
void printWords(char str[])
{   string ss[100] ;
    int count = 0;
   for(int i = 0 ;  i < iGetLen(str); i++ ){
        if(str[i] != ' '){
            string temp  = "";

            for(int j = i; ;j++){
                if(str[j] == ' ' || str[j] =='\0'){
                    i = j;
                    break;
                }
                else temp +=str[j];

            }
            ss[count] = temp;
            count++;
        }
    }
    for(int i = 0 ; i<count ; i++){
        cout<<ss[i]<<endl;
    }

    cout<<count;
}
int main()
{
    char str[101];
    cin.getline(str, 101);
    printWords(str);
    cout << "" << str << "";
    return 0;
}
