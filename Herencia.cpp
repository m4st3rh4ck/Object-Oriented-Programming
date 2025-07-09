#include<iostream>
#include<string>
using namespace std;
class Persona
{
	private:
		string nombre;
		int edad;
	public:
		Persona();
		void obtenerDatos();
		void mostrarDatos();
};
Persona::Persona()
{
	nombre = "";
	edad = 0;
}
void Persona::obtenerDatos()
{
	cout <<"Introduce el nombre: ";
	getline(cin, nombre);
	cout << "Introduce la edad: ";
	cin >> edad;
	cin.ignore();
}
void Persona::mostrarDatos() 
{
	cout << "\n";
	cout << "El nombre es: " << nombre << endl;
	cout << "La edad es: " << edad << endl;
}

class Estudiante : public Persona
{
   private:
    string ncuenta; //numero de cuenta de estudiante
    string licenciatura; //licenciatura que esta estudiando
   public:
   Estudiante() : Persona()
   {
   	ncuenta = "";
   	licenciatura = "";
   }
   void ObtenerDatos();
   void MostrarDatos();
};
void Estudiante::ObtenerDatos()
{
	obtenerDatos();
	cout << "Ingresa el Numero de Cuenta: ";
	getline(cin, ncuenta);
    fflush(stdin);
	cout << "Ingresa la Licenciatura: ";
	getline(cin, licenciatura);
}
void Estudiante::MostrarDatos()
{
	mostrarDatos();
	cout << "El Numero de Cuenta es: " << ncuenta << endl;
	cout << "La Licenciatura es: " << licenciatura << endl;
}
int main()
{
	Estudiante estudiante;
	estudiante.ObtenerDatos();
	estudiante.MostrarDatos();
	return 0;
}
