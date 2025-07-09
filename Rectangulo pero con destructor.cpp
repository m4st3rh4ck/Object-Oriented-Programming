#include<iostream>
#include<stdlib.h>
using namespace std;
class Rectangulo
{
	public:
		double base;
		double altura;
		double area;
		double perimetro;
	    Rectangulo(double, double);
	    void setter();
	    void getter();
	    ~Rectangulo();
};
Rectangulo::Rectangulo(double _base, double _altura)
{
	base = _base;
	altura = _altura;
}
void Rectangulo::setter()
{
	cout << "Ingresa la base del Rectangulo: " ;
	cin >> base;
	cout << "Ingresa la altura del Rectangulo: ";
	cin >> altura;
}
void Rectangulo::getter()
{
	area = base * altura;
	perimetro = 2 * (base + altura);
	cout << "El area del Rectangulo es: " << area << endl;
	cout << "El perimetro del Rectangulo es: " << perimetro << endl;
}
Rectangulo::~Rectangulo()
/*El destructor se manda a llamar asi mismo al finalizar la ejecucion 
del programa*/
{
	cout << "Destructor en accion" << endl;
}
int main()
{
	Rectangulo rectangulo(0.0, 0.0);
	rectangulo.setter();
	rectangulo.getter();
    //rectangulo.~Rectangulo();
    /*Si vuelvo a llamar al destructor en el main,
	el mensaje que tiene el destructor se imprimira dos veces
	porque el destructor se manda a llamar por omision*/

    return 0;
}
