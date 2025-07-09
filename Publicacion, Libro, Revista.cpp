/*Descripción: Implementa una clase base Publicación
con atributos como título, autor y año de publicación.
Crea dos clases derivadas Libro y Revista, donde Libro
tenga un atributo adicional como número de páginas y Revista
tenga frecuencia de publicación. Crea métodos que permitan
al usuario ingresar los datos de cada tipo de publicación.*/
#include<iostream>
using namespace std;
class Publicacion //Clase Base
{
	private:
		string titulo;
		string autor;
		int anio; //Año de publicacion del libro
	public:
		Publicacion();
	void setter();
	void getter();
};
Publicacion :: Publicacion()
{
	titulo = "";
	autor = "";
	anio = 0;
};
void Publicacion :: setter()
{
	cout << "Ingresa el Titulo: ";
	getline(cin, titulo);
	fflush(stdin);
	cout << "Ingresa el Autor: ";
	getline(cin, autor);
	fflush(stdin);
	cout << "Ingresa el Año de Publicacion: ";
	cin >> anio;
	fflush(stdin);
};
void Publicacion :: getter()
{
	cout << "Titulo: " << titulo << endl;
	cout << "Autor: " << autor << endl;
	cout << "Fecha de Publicacion: " << anio << endl;
}
class Libro : public Publicacion//Clase derivada 1
{
	//Numero de Paginas
	private:
		int npaginas; //Numero de Paginas
	public:
		Libro() : Publicacion()
		{
			npaginas = 0;
		}
		void setter();
		void getter();
};
void Libro :: setter()
{
	Publicacion :: setter();
    cout << "Ingresa el Numero de Paginas: ";
    cin >> npaginas;
    fflush(stdin);
};
void Libro :: getter()
{
	Publicacion :: getter();
	cout << "Numero de Paginas: " << npaginas << endl;
}
class Revista : public Publicacion//Clase derivada 2
{
	//Frecuencia de Publicacion
    private:
      string fpublicacion; //Frecuencia de Publicacion
    public:
    	Revista() : Publicacion()
    	{
    		fpublicacion = "";
		}
	void setter();
	void getter();
};
void Revista :: setter()
{
	Publicacion :: setter();
	cout << "Ingresa con cuanta Frecuentcia se hace una nueva Publicacion: ";
	getline(cin, fpublicacion);
	fflush(stdin);
};
void Revista :: getter()
{
	Publicacion :: getter();
	cout << "Frecuencia de Publicacion: " << fpublicacion << endl;
};
int main()
{
	Publicacion publicacion;
	Libro libro;
	Revista revista;
	
	cout << "Ingresa la informacion del Libro\n" << endl;
	libro.setter();
	cout << "Ingresa la informacion de la Revista\n" << endl;
	revista.setter();
	cout << "Informacion del Libro\n" << endl;
	libro.getter();
	cout << "Informacion de la Revista\n" << endl;
	revista.getter();
}
