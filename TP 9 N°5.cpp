#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esAnagrama(const string &cadena1, const string &cadena2) {
    if (cadena1.length() != cadena2.length()) {
        return false;
    }

    string str1 = cadena1;
    string str2 = cadena2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    string cadena1, cadena2;

    cout << "Ingrese la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);

    if (esAnagrama(cadena1, cadena2)) {
        cout << "Las cadenas son anagramas." << endl;
    } else {
        cout << "Las cadenas NO son anagramas." << endl;
    }

    return 0;
}

