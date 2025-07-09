/*Descripción: Crea una clase base Persona con atributos como nombre,
 edad y sexo. Luego, crea dos clases derivadas Estudiante y Profesor 
 que hereden de Persona y añadan atributos específicos (por ejemplo,
 matrícula para Estudiante y especialidad para Profesor). Implementa 
 métodos para ingresar los datos de cada persona desde la entrada estándar.*/
#include<iostream>
#include<string>
using namespace std;
class Persona{
	private:
		string nombre;
		int edad;
		string sexo;
	public:
		Persona();
		void setter();
		void getter();
};
Persona :: Persona()
{
	nombre = "";
	edad = 0;
	sexo = "";
};
void Persona :: setter()
{
	cout <<"Proporciona el nombre: ";
	getline(cin,nombre);
	fflush(stdin);
	cout << "\nIngresa la edad: ";
	cin >> edad;
	cin.ignore();
	cout << "\nIntroduce el sexo: ";
	getline(cin, sexo);
	fflush(stdin);
};
void Persona :: getter()
{
	cout <<"Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
};
//clase derivada Estudiante*/
class Estudiante : public Persona
{
	private:
		string ncuenta; //numero de cuenta del estudiante
		string lic; //Licenciatura que se esta estudiando
	public:
		Estudiante() : Persona() 
	/*Al crear el constructor de la clases derivadas tambien debo de heredar
	el constructor de la clase derivada*/
	{
		ncuenta = "";
		lic = " ";
	}
		void setter(); //Funcion heredara de Persona
        void getter(); //Funcion heredara de Persona
};
void Estudiante :: setter()
{
	cout << "Ingresa los datos del Estudiante\n\n";
	Persona :: setter();
	/*Aqui estoy heredando la funcionalidad del metodo setter de la clase base
	para no tener que escribir nuevamente para el alumno el nombre, la edad y el
	sexo y agregar cosas nuevas reutilizando codigo*/
	cout << "\nIngresa en numero de cuenta del alumno: ";
	getline(cin, ncuenta);
	fflush(stdin);
	cout << "\nIngresa la licenciatura en la que se encuentra el alumno: ";
	getline(cin, lic);
	fflush(stdin);
	system("cls");
};
void Estudiante :: getter()
{
	Persona :: getter();
	/*Aqui nuevamente estoy heredando la funcion getter de la clase base para
	mostrar la informacion pero de alumno, asi reutilizo codigo y puedo meter
	cosas nuevas evintando pedir cosas que ya tengo*/
	cout << "Numero de cuenta: " << ncuenta << endl;
	cout << "Licenciatura: " << lic << endl;
};
/*class derivada especialidad para Profesor*/
class Profesor : public Persona
{
	private:
		string division; //En que area se encuentra el profesor
		string materia; // Materia de la cual imparte clases
		string antiguedad; //Años que lleva impartiendo dicha clase
	public:
         Profesor() : Persona()
		{
			division = "";
			materia = "";
			antiguedad = "";
		}
		void setter();
		void getter();
};
void Profesor :: setter()
{
	cout << "Ingresa los Datos del Profesor\n\n";
	Persona :: setter();
	cout << "\nIngresa la division: " ;
	getline(cin, division);
	fflush(stdin);
	cout << "\nIngresa la materia que imparte el profesor: ";
	getline(cin, materia);
	fflush(stdin);
	cout << "\nIngresa la antiguedad del profesor: ";
	getline(cin, antiguedad);
	fflush(stdin);
	system("cls");
};
void Profesor :: getter()
{
	Persona :: getter();
	cout << "La división es: " << division<< endl;
	cout << "La materia que imparte el profesor es: " << materia << endl;
	cout << "La antiguedad del profesor es de: " << antiguedad << endl;
};
int main()
{
	Persona persona;
	Estudiante estudiante;
	Profesor profesor;
    
    estudiante.setter();
    profesor.setter();
    cout << "DATOS DEL ALUMNO" << endl;
    estudiante.getter();
    cout << "DATOS DEL PROFESOR" << endl;
    profesor.getter();
    
    return 0;
}
