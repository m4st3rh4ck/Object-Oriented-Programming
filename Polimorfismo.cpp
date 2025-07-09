#include <iostream>
using namespace std;

class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona(string _nombre, int _edad); // Constructor con parámetros
        /*el metodo virtual va solo en la 
        clse base */
        virtual void mostrar();
};

// Definición del constructor de Persona
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

// Definición del método mostrar de Persona
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
        Alumno(string _nombre, int _edad, float _notaFinal); // Constructor con parámetros
        void mostrar();
};

// Definición del constructor de Alumno
Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad)
{
    notaFinal = _notaFinal;
}

// Definición del método mostrar de Alumno
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
        Profesor(string _nombre, int _edad, string _materia); // Constructor con parámetros
        void mostrar();
};

// Definición del constructor de Profesor
Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad)
{
    materia = _materia;
}

// Definición del método mostrar de Profesor
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

    // Liberación de memoria dinámica
    delete vector[0];
    delete vector[1];
    delete vector[2];

    return 0;
}

