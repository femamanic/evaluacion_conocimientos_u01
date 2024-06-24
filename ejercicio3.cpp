#include <iostream>
using namespace std;

float suma (int a);
int factorial (int a);

int main () {
    int n;
    float sum;
    cout << "Introduce un numero: "; cin >> n;
    sum = suma(n);
    cout << sum << endl;
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