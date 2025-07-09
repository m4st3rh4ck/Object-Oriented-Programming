/*Gesti�n de Veh�culos
Descripci�n: Dise�a una clase base Veh�culo con atributos 
como marca,modelo y a�o. Crea dos clases derivadas Coche y Motocicleta, 
que agreguen atributos espec�ficos (por ejemplo, n�mero de puertas 
para Coche y tipo de manillar para Motocicleta). Implementa m�todos para que el
usuario ingrese los datos de cada veh�culo y muestra la informaci�n ingresada.*/
#include<iostream>
using namespace std;
//Creacion de la clase Vehiculo
class Vehiculo
{
	public:
		string marca;
		string modelo;
		int anio;
		Vehiculo(); //Constructor
	//Metodos 
	void setter(); //Para ingresar la informacion
	void getter(); //Para mostrar la informacion
};
//Metodo Constructor
Vehiculo :: Vehiculo()
{
	marca = "";
	modelo = "";
	anio = 0;
};
//Metodo Setter
void Vehiculo :: setter()
{
	getline(cin, marca);
	fflush(stdin);
	cout << "Ingresa la modelo: ";
    getline(cin, modelo);
    fflush(stdin);
    cout << "Ingresa el a�o: ";
    cin >> anio;
    fflush(stdin);
};
//Metodo Getter
void Vehiculo :: getter()
{
   cout << "Marca: " << marca << endl;
   cout << "Modelo: " << modelo << endl;
   cout << "A�o: " << anio << endl;
};
//Heredacion de la clase Coche a la clase Vehiculo
class Coche : public Vehiculo
{
	public:
	 int npuertas; //Numero de Puertas
     Coche() : Vehiculo() 
     {
     	npuertas = 0;
	 }
     void setter();
     void getter();
};
void Coche :: setter()
{
	Vehiculo :: setter();
	cout << "Ingresa el numero de puertas: ";
	cin >> npuertas;
	fflush(stdin);
};
void Coche :: getter()
{
	Vehiculo :: getter();
	cout << "Numero de puertas: " << npuertas << endl;
};
class Motocicleta : public Vehiculo
{
    public:
      string t_moto; //Tipo de moto
      Motocicleta() : Vehiculo()
      {
      	t_moto = "";
	  }
	  void setter();
	  void getter();
};
void Motocicleta :: setter()
{
	Vehiculo :: setter();
	cout << "Ingresa el tipo de motocicleta: ";
	getline(cin, t_moto);
	fflush(stdin);
};
void Motocicleta :: getter()
{
	Vehiculo :: getter();
	cout << "Tipo de Motocicleta: " << t_moto << endl;
};
int main()
{
	Vehiculo vehiculo;
	Motocicleta moto;
    Coche coche;
    cout << "Ingrese la informacion del Coche\n" << endl;
    coche.setter();
    cout << "\nIngrese la informacion de la Motocicleta" << endl;
    moto.setter();
    cout << "\nInformacion del Coche" << endl;
    coche.getter();
    cout << "\nInformacion de la Motocicleta" << endl;
    moto.getter();
    
}
