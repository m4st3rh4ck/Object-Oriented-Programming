#include<iostream>
using namespace std;
class Rectangulo
{
	public:
		double base;
		double altura;
		double perimetro;
		double area;
		Rectangulo(double,double);
		void getter();
		void setter();
};
Rectangulo::Rectangulo(double _base, double _altura)
{
	base = _base;
	altura = _altura;
	/*Variables con las que trabajo se pasan como parametros
	pero las variables que voy a obtener como resultados no son parametros*/
    /*El contructor solo es para inicializar no para calcular */
}
void Rectangulo::getter()
{
	cout << "Ingrese la base del triangulo: " <<endl;
	cin >> base;
	cin.ignore();
	cout << "Ingrese la altura del triangulo: " <<endl;
	cin >> altura;
	cin.ignore();
}
void Rectangulo::setter()
{
    perimetro =  2 * (altura + base);
	area = base * altura;
	cout << "El area del rectangulo es: " << area << endl;
	cout << "El perimetro del rectagulo es: " << perimetro << endl;
}
int main()
{
	Rectangulo rectangulo(0,0);
	rectangulo.getter();
	rectangulo.setter();
	return 0;
}


