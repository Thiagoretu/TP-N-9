#include <iostream>
#include <cstring>
using namespace std;

int contarPalabras(const char cadena[]) {
    int contador = 0;
    bool enPalabra = false;

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == ' ') {
            enPalabra = false;
        } else {
            if (!enPalabra) {
                contador++;
                enPalabra = true;
            }
        }
    }

    return contador;
}

int main() {
    char texto[100];
    
    cout << "Ingresa una frase: ";
    cin.getline(texto, 100);
    
    int cantidad = contarPalabras(texto);
    
    cout << "La cantidad de palabras es: " << cantidad << endl;
    
    return 0;
}

