/*Implementa una clase Estudiante con los atributos nombre, edad, y calificacion.
 El programa debe permitir al usuario ingresar la información de varios estudiantes, 
 almacenarlos en un arreglo o vector, y luego mostrar la lista completa de estudiantes 
 con sus calificaciones. Adicionalmente, implementa un método que calcule y muestre el
 promedio de las calificaciones ingresadas.*/
 #include<iostream>
 #include<string>
 #include<stdlib.h>
 using namespace std;
 class Estudiante
 {
    private:
	 string nombre;
	 int edad;
	 double calificacion;
	public:
	Estudiante();
	void solicitarInfo();
	void mostrarInfo();
	double promedioGen();	
 };
 Estudiante::Estudiante()
 {
 	nombre = "";
 	edad = 0;
 	calificacion = 0.0;
 }
 void Estudiante::solicitarInfo()
 {
 	cout << "Ingresa el Nombre del estudiante: ";
 	cin.ignore();
 	getline(cin, nombre);
 	cout << "Ingresa la edad del estudiante: ";
 	cin >> edad;
 	cout << "Ingresa la calificacion del estudiante: ";
 	cin >> calificacion;
}
void Estudiante::mostrarInfo()
{
	cout << "El nombre del estudiante es: " << nombre << endl;
	cout << "La edad del estudiante es: " << edad << endl;
	cout << "La calificacion del estudiante es: " << calificacion << endl;
}
double Estudiante::promedioGen() {
    return calificacion;
}

void promedioGen(Estudiante* estudiantes, int cantidad) {
    double suma = 0.0;
    for (int i = 0; i < cantidad; i++) {
        suma += estudiantes[i].promedioGen();
    }
    double promedio = suma / cantidad;
    cout << "El promedio de las calificaciones es: " << promedio << endl;
}
int main()
{
	int cantidad; //Cantidad de estudiantes a ingresar
	cout << "Ingresa la cantidad de estudiantes a ingresar: ";
	cin >> cantidad;
	
    Estudiante* estudiante	= (Estudiante *)malloc(cantidad * sizeof(Estudiante));
	for(int i = 0; i < cantidad; i++)
	{
		estudiante[i].solicitarInfo();
	    cout << endl;
	}
	for(int i = 0; i < cantidad; i++)
	{
		estudiante[i].mostrarInfo();
	}
	promedioGen(estudiante, cantidad);
	free(estudiante);
}
 
