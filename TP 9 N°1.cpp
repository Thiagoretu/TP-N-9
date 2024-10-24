#include <iostream>
using namespace std;

float sumar(float num1, float num2) {
    return num1 + num2;
}

float restar(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}


float dividir(float num1, float num2) {
    if (num2 != 0) { 
        return num1 / num2;
    } else {
        cout << "Error: No se puede dividir por 0" << endl;
        return 0; 
    }
}

int main() {
    float numero1, numero2;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(numero1, numero2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(numero1, numero2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(numero1, numero2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(numero1, numero2) << endl;
            break;
        default:
            cout << "Operación no válida" << endl;
            break;
    }

    return 0;
}

