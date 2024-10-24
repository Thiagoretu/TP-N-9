#include <iostream>
using namespace std;

struct Alumno {
    string nombre;
    string apellido;
    string curso;
    string materia;
    float nota1, nota2, nota3;
};

void Inicializar(Alumno &alumno) {
    cout << "Ingrese el nombre del alumno: ";
    cin >> alumno.nombre;
    cout << "Ingrese el apellido del alumno: ";
    cin >> alumno.apellido;
    cout << "Ingrese el curso del alumno: ";
    cin >> alumno.curso;
    cout << "Ingrese la materia: ";
    cin >> alumno.materia;
    cout << "Ingrese la nota del primer trimestre: ";
    cin >> alumno.nota1;
    cout << "Ingrese la nota del segundo trimestre: ";
    cin >> alumno.nota2;
    cout << "Ingrese la nota del tercer trimestre: ";
    cin >> alumno.nota3;
}
float calcularPromedio(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

void calcularCondicion(Alumno alumno) {
    if (alumno.nota1 >= 7 && alumno.nota2 >= 7 && alumno.nota3 >= 7) {
        cout << "El alumno ha promocionado la materia." << endl;
    } else if (alumno.nota1 >= 5 && alumno.nota2 >= 5 && alumno.nota3 >= 5) {
        cout << "El alumno puede recuperar el trimestre." << endl;
    } else {
        cout << "El alumno ha reprobado y debe recursar la materia." << endl;
    }
}

int main() {
    Alumno alumno;

    Inicializar(alumno);

    float promedio = calcularPromedio(alumno.nota1, alumno.nota2, alumno.nota3);
    cout << "Promedio de notas: " << promedio << endl;

    calcularCondicion(alumno);

    return 0;
}

