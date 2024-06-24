#include <iostream>
using namespace std;
int main (){
    int op1, op2, r;
    char op, re;
    do {
        system ("cls");
        cout << "===============================\n";
        cout << "\t  CALCULADORA\n";
        cout << "===============================\n";
        cout << "Operadores validos: +, -, *, /\n";
        cout << "===============================\n";
        cout << "Introduce el primer operando: "; cin >> op1;
        cout << "Introduce el segundo operando: "; cin >> op2;
        cout << "Introduce el operador: "; cin >> op;
        switch (op){
            case '+':
                cout << "La suma es: "; r = op1 + op2; cout << r << endl;
                break;
            case '-':
                cout << "La resta es: "; r = op1 - op2; cout << r << endl;
                break;
            case '*':
                cout << "La multiplicacion es: "; r = op1 * op2; cout << r << endl;
                break;
            case '/':
                if (op2 == 0){
                    cout << "No se puede dividir por cero\n";
                    return 1;
                }
                cout << "La division es: "; r = op1 / op2; cout << r << endl;
                break;
            default:
                cout << "Operador no valido\n";
                break;
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