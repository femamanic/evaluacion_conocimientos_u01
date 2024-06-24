#include <iostream>
using namespace std;
int main () {
    int n1, n2, c = 0, i = 1;
    cout << "Introduce el primer numero: "; cin >> n1;
    cout << "Introduce el segundo numero: "; cin >> n2;
    while (i <= n1 && i <= n2){
        if (n1 % i == 0 && n2 % i == 0){
            c++;
        }
        i++;
    }
    if (c > 1){
        cout << "Los numeros no son PESI\n";
    } 
    else {
        cout << "Los numeros son PESI\n";
    }
    return 0;
}