#include <iostream>
using namespace std;
int main () {
    int n1, n2;
    char re;
    do {
        system ("cls");
        cout << "===============================\n";
        cout << "\t\tPESI\n";
        cout << "===============================\n";
        cout << "Introduce el primer numero: "; cin >> n1;
        cout << "Introduce el segundo numero: "; cin >> n2;
        if (n1 <= 0 || n2 <= 0){
            cout << "Los numeros deben ser mayores a cero\n";
            system ("pause>nul");
        }
        else {
            int i = 1, c = 0;
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
        }
        cout << "===============================\n";
        cout << "Desea realizar otra operacion? (s/n): "; cin >> re;
    } while (re == 's' || re == 'S');
    if (re == 'n' || re == 'N'){
        cout << "===============================\n";
        cout << "Saliendo del programa ...\n";
        system ("pause>nul");
    }
    return 0;
}