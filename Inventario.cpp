/*Crea una clase Producto que tenga como atributos nombre, precio, y cantidad.
 El usuario debe poder ingresar los detalles de varios productos y luego mostrarlos. 
 Además, implementa un método que calcule el total del inventario multiplicando el
 precio por la cantidad de cada producto y lo muestre al final.*/
#include<iostream>
#include<string>
using namespace std;
class Producto 
{
	public:
		double precio;
		string nombre;
		int cantidad;
		Producto();
		void ingresarInfo(); //setter
		void mostrarInfo(); //getter
		void inventarioTotal();
		/*Método que calcula el total del inventario multiplicando el
  precio por la cantidad de cada producto y lo muestre al final*/		
};
Producto::Producto()
{
	precio = 0.0;
	nombre = "";
	cantidad = 0;
}
void Producto::ingresarInfo()
{
	cout << "Ingresa el nombre del producto: ";
	cin.ignore();
	getline(cin, nombre);
	cout << "Ingresa el precio del producto: ";
	cin >> precio;
	cout << "Ingresa las unidades del producto:  ";
	cin >> cantidad;
	cout << endl;
}
void Producto::mostrarInfo()
{
	cout << endl;
	cout << "El nombre del producto es: " << nombre << endl;
	cout << "El precio del producto es: " << precio << endl;
	cout << "Las unidades del producto es: " << cantidad << endl;
}
void Producto::inventarioTotal()
{
	double total = cantidad * precio;
	cout << "Total: " << total;
}
int main()
{
	Producto producto;
	producto.ingresarInfo();
	producto.mostrarInfo();
	producto.inventarioTotal();
	return 0;
}



