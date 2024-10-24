#include <iostream>
using namespace std;

double bytesAKilobytes(double bytes) {
    return bytes / 1024.0;
}

double terabytesAMegabytes(double terabytes) {
    return terabytes * 1024.0;
}

double gigabytesAPetabytes(double gigabytes) {
    return gigabytes / 1024.0;
}

int main() {
    int opcion;
    double cantidad;

    cout << "Selecciona la conversión que deseas realizar:\n";
    cout << "1. Bytes a Kilobytes\n";
    cout << "2. Terabytes a Megabytes\n";
    cout << "3. Gigabytes a Petabytes\n";
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la cantidad en Bytes: ";
            cin >> cantidad;
            cout << cantidad << " Bytes son " << bytesAKilobytes(cantidad) << " Kilobytes." << endl;
            break;

        case 2:
            cout << "Ingresa la cantidad en Terabytes: ";
            cin >> cantidad;
            cout << cantidad << " Terabytes son " << terabytesAMegabytes(cantidad) << " Megabytes." << endl;
            break;

        case 3:
            cout << "Ingresa la cantidad en Gigabytes: ";
            cin >> cantidad;
            cout << cantidad << " Gigabytes son " << gigabytesAPetabytes(cantidad) << " Petabytes." << endl;
            break;

        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}

