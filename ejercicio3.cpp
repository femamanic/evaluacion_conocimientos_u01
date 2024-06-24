#include <iostream>
using namespace std;

float suma (int a);
int factorial (int a);

int main () {
    int n;
    float sum;
    char re;
    do {
        system ("cls");
        cout << "===============================================\n";
        cout << "\t\t    SUMA DE\n";
        cout << "1!/(2*1) + 2!/(2*2) + 3!/(2*3) + ... + n!/(2*n)\n";
        cout << "===============================================\n";
        cout << "Introduce un numero: "; cin >> n;
        if (n <= 0){
            cout << "===============================================\n";
            cout << "El numero debe ser mayor a cero\n";

        }
        else {
        sum = suma(n);
        cout << "===============================================\n";
        cout << "La suma total es: " << sum << endl;
        }
        cout << "===============================================\n";
        cout << "Desea realizar otra operacion? (s/n): "; cin >> re;
    } 
    while (re == 's' || re == 'S');
    if (re == 'n' || re == 'N'){
        cout << "===============================================\n";
        cout << "Saliendo del programa ...\n";
        system ("pause>nul");
    }
    return 0;
}

float suma (int a) {
    float s = 0;
    for (int i = 1; i <= a; i++) {
        s += factorial(i)/(2.0 * i);
    }
    return s;
}

int factorial (int a) {
    int f = 1;
    for (int i = 2; i <= a; i++) {
        f *= i;
    }
    return f;
}