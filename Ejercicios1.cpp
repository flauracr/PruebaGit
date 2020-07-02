// Ejercicios1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.


//definicion de librerias
#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <iomanip>
#include <string>
#include "FuncionesEjercicios1.h"
using namespace std;




//funcion principal
int main()
{
	
	int resultadoRomano = 0;
	
		cout << endl;
		cout << setw(35) << "---------- Ejercicios Practica # 1 --------------------" << endl;
		cout << setw(35) << "---------- Programacion Estructurada- Lenguaje C++ ----" << endl;
		cout << endl
			<< setw(40) << "1: Estudiante y promedio del curso                      " << endl
			<< setw(40) << "2: Area y perímetro del Circulo                         " << endl
			<< setw(40) << "3: Conversion de tamanio de archivo                     " << endl
			<< setw(40) << "4: Conviersion temperaturas Fahrenheit  a Celsius       " << endl
			<< setw(40) << "5: Notas de estudiantes                                 " << endl
			<< setw(40) << "6: Salario del empleado                                 " << endl
			<< setw(40) << "7: Numeros Romanos                                      " << endl
			<< setw(40) << "8: Puntajes con Dados                                   " << endl
			<< setw(40) << "9: Grafico de positivos y negativos                     " << endl
			<< setw(40) << "10:       ----------------- Salir --------------        " << endl;

		while (opcion != 10)
		{
			cout << endl;
			cout << "Digite la opcion:";
			cin >> opcion;
			if (opcion == 1) {
				EntradaSalida();
			}
			else if (opcion == 2) {
				Circulo_Area_Peri();
			}
			else if (opcion == 3) {
				CalculaPeso();
			}
			else if (opcion == 4) {
				claculaGrados();
			}
			else if (opcion == 5) {
				calculaNota();
			}
			else if (opcion == 6) {
				Calcula_Salario();
			}
			else if (opcion == 7) {
				resultadoRomano = CalculaRomanos();
				if (resultadoRomano == -1) {
					cout << setw(40) << "El numero ingresado es incorrecto" << endl;
				}
				else {
					cout << setw(40) << "El resultado es :" << resultadoRomano << endl;
				}
			}
			else if (opcion == 8) {
				CalculaDados();
			}
			else if (opcion == 9) {
				Grafico();
			}
			else if (opcion > 10) {
				cout << "El numero no es valido" << endl;
			}
			system("pause");
	}
	
}
	

	
	


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
