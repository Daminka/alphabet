#include <iostream>
#include <string.h>
#include <ctype.h>
//Сделала, что смогла :(
using namespace std;

int main()
{
    const int n = 100;
    string a[n];
    int kolstr = 0;
    for (int i = 0;i < n;i++){
        int kolzb = 0;
        string a1;
        getline(cin, a1);
        kolstr++;
        if (a1 == ""){
            break;
        }
        int b = a1.length();
        for (int l = 0;l < b;l++){
            if (a1[l] >= 'A' && a1[l] <= 'Z') {
               kolzb++;
            } 
        }
        if (kolzb == 3){
            a[i] = a1;
            i++;
        } else {
            cout << "\n" << "Ошибка ввода:(" << "\n" << "\n";
            break;
        }
        
    }
    cout << "\n" << "ФИО:)" << "\n";
    for (int i = 0;i <= kolstr;i++){
        cout << a[i] << "\n";
    }
}
