#include <iostream>
using namespace std;

class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona(string _nombre, int _edad); // Constructor con par�metros
        /*el metodo virtual va solo en la 
        clse base */
        virtual void mostrar();
};

// Definici�n del constructor de Persona
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

// Definici�n del m�todo mostrar de Persona
void Persona::mostrar()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

class Alumno : public Persona
{
    private:
        float notaFinal;
    public:
        Alumno(string _nombre, int _edad, float _notaFinal); // Constructor con par�metros
        void mostrar();
};

// Definici�n del constructor de Alumno
Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad)
{
    notaFinal = _notaFinal;
}

// Definici�n del m�todo mostrar de Alumno
void Alumno::mostrar()
{
    Persona::mostrar();
    cout << "Nota Final: " << notaFinal << endl;
}

class Profesor : public Persona
{
    private:
        string materia;
    public:
        Profesor(string _nombre, int _edad, string _materia); // Constructor con par�metros
        void mostrar();
};

// Definici�n del constructor de Profesor
Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad)
{
    materia = _materia;
}

// Definici�n del m�todo mostrar de Profesor
void Profesor::mostrar()
{
    Persona::mostrar();
    cout << "Materia: " << materia << endl;
}

int main()
{
    Persona* vector[3];
    vector[0] = new Alumno("Gabriel", 19, 10.0);
    vector[1] = new Alumno("Daniela", 20, 5.6);
    vector[2] = new Profesor("Buenrostro", 67, "POO");

    vector[0]->mostrar();
    cout << "\n";
    vector[1]->mostrar();
    cout << "\n";
    vector[2]->mostrar();

    // Liberaci�n de memoria din�mica
    delete vector[0];
    delete vector[1];
    delete vector[2];

    return 0;
}

