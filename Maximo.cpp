#include <iostream>
#include <vector>
#include <string>

using namespace std;
void imprimBanner();
void recibirInput();
int mostrarMaximo(vector<int> mvect);
void imprimirContenido (vector<int>);

int main() {
	
	imprimBanner();
	cout << "Bienvenido al identificador del valor entero maximo.\n"
	<< "Escriba un entero para agregarlo a la lista\n" 
	<< "'M' para obtener el valor maximo\n"
	<< "'P' para imprimir el contenido de la lista en pantalla\n" 
	<< "'Q' para salir del programa\n";
	recibirInput();
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
	
	do {
		cin.clear();
		cin >> input;
		if ((input == "m") || (input == "M"))
			cout << "El numero maximo es " << mostrarMaximo(miVector) << "\n";
		else if ((input == "p") || (input == "P"))
			imprimirContenido (miVector);
		else if ((input == "q") || (input == "Q"))
			exit(0);
		else
			miVector.push_back(atoi(input.c_str()));
	} while (true);
}

void imprimirContenido (vector<int> mvect){
		for (int i = 0; i < mvect.size(); i++){
			cout << mvect[i] << " ";}
		cout << "\n";
}

int mostrarMaximo(vector<int> mvect){
	int max = mvect[0];
	
	for (int i = 0; i < mvect.size(); i++){
		if (mvect[i] > max)
			max = mvect[i];
	}
	
	return max;
}
