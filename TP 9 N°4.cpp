#include <iostream>
#include <string>

using namespace std;

bool buscarPalabra(const string &cadena, const string &palabra) {
    return cadena.find(palabra) != string::npos;
}

void imprimirResultado(bool encontrada, const string &palabra) {
    if (encontrada) {
        cout << "La palabra '" << palabra << "' se encuentra en la cadena." << endl;
    } else {
        cout << "La palabra '" << palabra << "' NO se encuentra en la cadena." << endl;
    }
}

int main() {
    string cadena, palabra;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Ingrese la palabra a buscar: ";
    cin >> palabra;

    bool encontrada = buscarPalabra(cadena, palabra);

    imprimirResultado(encontrada, palabra);

    return 0;
}

