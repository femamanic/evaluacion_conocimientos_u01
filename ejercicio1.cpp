#include <iostream>
using namespace std;
int main (){
    system("cls");
    int op1, op2, r;
    char op;
    cout << "Introduce el operador: "; cin >> op;
    cout << "Introduce el primer operando: "; cin >> op1;
    cout << "Introduce el segundo operando: "; cin >> op2;
    switch (op){
        case '+':
            cout << "La suma es: "; r = op1 + op2;
            break;
        case '-':
            cout << "La resta es: "; r = op1 - op2;
            break;
        case '*':
            cout << "La multiplicacion es: "; r = op1 * op2;
            break;
        case '/':
            cout << "La division es: "; r = op1 / op2;
            break;
    }
    cout << r << endl;
    return 0;
}