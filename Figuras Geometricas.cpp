#include<iostream>
using namespace std;
class Rectangulo
{
  public:
  	float altura;
    float base;
    float perimetro;
    float area;	
    Rectangulo();
    void setter();
    void getter();
};
Rectangulo::Rectangulo()
{
	altura = 0.0;
    base = 0.0;
}
void Rectangulo::setter()
{
	cout << "Rectangulo\n";
	cout << "Ingresa la altura: ";
	cin >> altura;
	cout << "Ingresa la base: ";
    cin >> base;
}
void Rectangulo::getter()
{
	perimetro =  2 * (base  + altura);
	area = base * altura;
	cout << "El area del rectangulo es: " << area << endl;
	cout << "El perimetro del rectangulo es: " << perimetro <<endl;
}
class Cuadrado : public Rectangulo
{
	public:
    void setter();
    void getter();
};
void Cuadrado::setter()
{
	cout << "\nCuadrado\n";
	cout << "Ingresa un lado del cuadrado: ";
	cin >> base;
}
void Cuadrado:: getter()
{
   area = base * base;
   perimetro = 4 * base;
   cout << "El perimetro del cuadrado es: " << perimetro << endl;
   cout << "El area del cuadrado es: " << area;
}
class Triangulo : public Rectangulo
{
	public:
		Triangulo();
		float lado3;
		void setter();
		void getter();
}
Triangulo :: Triangulo
{
	lado3 = 0.0;
}
void Triangulo::setter()
{
	void setter();
	cout <<"Ingresa el lado 3: " <<
}

int main()
{
	Cuadrado cuadrado;
	Rectangulo rectangulo;
	rectangulo.setter();
	rectangulo.getter();
	cuadrado.setter();
	cuadrado.getter();
	return 0;
}


