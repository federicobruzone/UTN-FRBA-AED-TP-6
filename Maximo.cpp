/* UTN-FRBA-AED
 * TP Nº 6: Maximo
 * Alumno: Federico León Bruzone [155-683.6] 
 * Fecha: 21/04/2015
*/ 

#include <iostream>
#include <vector>
#include <string>

using namespace std;
void imprimBanner();
void recibirInput();
int mostrarMaximo(vector<int> mvect);
void imprimirContenido (vector<int>);

int main() {
	
	imprimBanner();  //Imprime un banner en pantalla que brinda información acerca del programa
	cout << "Bienvenido al identificador del valor entero maximo.\n"
	<< "Escriba un entero para agregarlo a la lista\n" 
	<< "'M' para obtener el valor maximo\n"
	<< "'P' para imprimir el contenido de la lista en pantalla\n" 
	<< "'Q' para salir del programa\n";
	recibirInput(); //Esta funcion permite recibir nuevos valores hasta que el usario decida salir del programa
}

void imprimBanner()
{
	cout << "\t+---------------------------------+" << endl;
	cout << "\t|Algoritmos y Estructuras de Datos|" << endl;
	cout << "\t|UTN-FRBA-Curso K1051             |" << endl;
	cout << "\t|TP No 5 - Maximo                 |" << endl;
	cout << "\t+---------------------------------+\n\n" << endl;
	
}

void recibirInput (){
	vector<int> miVector;
	string input;
	int max;
	
	do {	// El metodo de la funcion se ejecuta en un loop infinito
		cin.clear(); // Para filtrar caracteres de retorno arrastrados de ingresos anteriores
		cin >> input;
		if ((input == "m") || (input == "M"))
			cout << "El numero maximo es " << mostrarMaximo(miVector) << "\n";
		else if ((input == "p") || (input == "P")) // La p es de 'print'
			imprimirContenido (miVector);
		else if ((input == "q") || (input == "Q"))
			exit(0);
		else	// Si lo ingresado no es ninguna de las letras de comando
			miVector.push_back(atoi(input.c_str()));  // Convierte el ingreso de string a int y lo envia
								  // al final del array dinamico miVector
	} while (true);
}

void imprimirContenido (vector<int> mvect){
		for (int i = 0; i < mvect.size(); i++){
			cout << mvect[i] << " "; // Imprime todos los valores en el array dinamico en una linea
		}				 // con una separacion de un espacio
		cout << "\n"; // Inserta un salto de linea al final
}

int mostrarMaximo(vector<int> mvect){
	int max = mvect[0];	// Inicializa la variable con el valor de la primera posicion del array dinamico
	
	for (int i = 0; i < mvect.size(); i++){
		if (mvect[i] > max)
			max = mvect[i];
	}
	
	return max;
}
