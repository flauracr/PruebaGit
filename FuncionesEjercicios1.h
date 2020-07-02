#pragma once

//definicion de librerias
#include <cstdio>
#include <iomanip>
#include <string>
using namespace std;


//definicion de variables globales
int opcion, salir, tamano, Uactual, Nactual, nota, ausencias;
double gradosf, gradosC, SalarioBruto;
long double Runidad;
string condicion = "";

//1.	Escriba un programa que genere la siguiente salida(utilice manipuladores de entrada/salida)
//ESTUDIANTE    PROMEDI0 DEL CURSO 
//1             84.5 
//2             67.2
//3             77.4
//4             86.8
//5             94.7
//--------------------------------------------------------------------------------------------------
/// <summary>
/// Ejercicio 1. Funcion para practicar las instruccione de entrada salida y tipos de datos
/// </summary>
/// <returns>toda la informacion de la funcion</returns>

int EntradaSalida() {

	cout << endl;
	string sCadena = "---------        ESTUDIANTE	----- PROMEDIO---------";
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num4 = 4;
	int num5 = 5;
	float prom1 = 84.5;
	float prom2 = 96.3;
	float prom3 = 88.2;
	float prom4 = 64.7;
	float prom5 = 55.5;

	cout << sCadena << endl;
	cout << "                    " << num1 << "                    " << prom1 << endl;
	cout << "                    " << num2 << "                    " << prom2 << endl;;
	cout << "                    " << num3 << "                    " << prom3 << endl;;
	cout << "                    " << num4 << "                    " << prom4 << endl;;
	cout << "                    " << num5 << "                    " << prom5 << endl;;

	return 0;
}

//2.	Escriba un programa que solicite la medida del radio de un círculo y calcule el área 
//y el perímetro, los resultados se deben mostrar con dos decimales
//
int Circulo_Area_Peri() {

	const float PI = 3.1416; //Definimos una constante llamada PI
	int radio;
	float area;
	float perimetro;

	//estas son las formulas:
	//P=2*PI*radio
	//A=πr2

	cout << endl;
	cout << "------ Digite el radio del circulo:   ";
	cin >> radio;

	perimetro = 2 * PI * radio;
	area = PI * pow(radio, 2);


	cout << endl;
	cout << "-----  El perimetro del circulo es:   " << fixed << setprecision(2) << perimetro << endl;
	cout << endl;
	cout << "-----  El area del circulo es:   " << area << endl;
	cout << endl;

	return 0;
}


//3.	Escriba un programa que solicite el tamaño de un archivo junto(valor y unidad de medida) 
//y realice la conversión a otra unidad solicitada.Trabaje solo con KB, MB y GB.

string Cambia_Testo_Unidad(int U) {
	string unidad;
	if (U == 1) {
		unidad = "KB";
	}
	if (U == 2) {
		unidad = "MB";
	}
	if (U == 3) {
		unidad = "GB";
	}
	return unidad;
}
long double convertit(int tamano, int Uactual, int Nactual) {
	long double r = 0;
	if (Uactual == Nactual) {
		r = tamano;
	}
	if (Uactual == 1 && Nactual == 2) {
		r = tamano / 1024.00;
	}
	if (Uactual == 1 && Nactual == 3) {
		r = (tamano / 1024.00) / 1024.00;
	}
	if (Uactual == 2 && Nactual == 1) {
		r = tamano * 1024.00;
	}
	if (Uactual == 2 && Nactual == 3) {
		r = tamano / 1024.00;
	}
	if (Uactual == 3 && Nactual == 1) {
		r = tamano * 1024.00 * 1024.00;
	}
	if (Uactual == 3 && Nactual == 2) {
		r = tamano * 1024.00;
	}
	return r;
}

void CalculaPeso() {
	cout << "Escriba el tamano del Archivo" << endl;
	cin >> tamano;
	cout << setw(40) << "Seleccione la unidad en la que se encuentra el archivo" << endl
		<< setw(25) << "1: Esta en KB" << endl
		<< setw(25) << "2: Esta en MB" << endl
		<< setw(25) << "3: Esta en GB" << endl;
	cin >> Uactual;
	cout << setw(45) << "Seleccione a que Unidad de medida lo quiere pasar" << endl
		<< setw(25) << "1: Pasar a KB" << endl
		<< setw(25) << "2: Pasar a MB" << endl
		<< setw(25) << "3: Pasar a GB" << endl;
	cin >> Nactual;
	Runidad = convertit(tamano, Uactual, Nactual);
	Cambia_Testo_Unidad(Uactual);
	Cambia_Testo_Unidad(Nactual);
	cout << setw(35) << "El resultado de convertir " << endl
		<< setw(10) << tamano << " " << Cambia_Testo_Unidad(Uactual) << " A " << Cambia_Testo_Unidad(Nactual) << endl
		<< setw(10) << "Son : " << fixed << setprecision(6) << Runidad << "  " << Cambia_Testo_Unidad(Nactual) << endl;
}


//4.	Escriba un programa que convierta temperaturas Fahrenheit enteras, desde 0 hasta 212 grados, 
//a temperaturas Celsius de punto flotante con 3 dígitos de precisión.
//Utilice la fórmula :
//celsius = 5 / 9 * (fahrenheit – 32)
//La salida debe imprimirse en dos columnas y las temperaturas Celsius deberán 
//estar precedidas por un signo para los valores positivos y negativos.

double grados(double gf) {
	double cel;
	cel = 5 / 9.0 * (gf - 32);
	return cel;
}


void claculaGrados() {

	cout << "Escriba el valor en grados entre 0 212: " << endl;
	cin >> gradosf;
	if (cin.fail()) {
		cout << "Volver a intentar: " << endl;
	}
	else {
		if (gradosf > 0 && gradosf <= 212) {
			gradosC = grados(gradosf);
			cout << "fahrenheit                      Celsius   " << endl
				<< setw(8) << gradosf << setw(32) << fixed << setprecision(3) << showpos << gradosC << endl;
		}
		else {
			cout << "Los grados deben ser mayor 0 y menor a 212" << endl;
		}
	}
}

//5.	Para que un estudiante apruebe un curso deben tomar en cuenta los siguientes criterios
//Tomando en cuenta las condiciones anteriores escriba un programa en C++ que se encargue de solicitar 
//la nota y ausencias de n estudiantes y determine la condición de cada uno (utilice funciones)

string condicionEstudiante(int nota, int ausencias) {
	string cond = "";
	if (nota >= 70 && ausencias <= 2) {
		cond = "APROBO";
	}
	else if (nota > 60 && ausencias < 2) {
		cond = "APLAZO";
	}
	else if (nota < 60) {
		cond = "REPROBO";
	}
	else if (ausencias > 2) {
		cond = "REPROBO";
	}

	return cond;
}


void calculaNota() {
	cout << "Escriba la nota del estudiante" << endl;
	cin >> nota;
	cout << "Escriba el numero de ausencias" << endl;
	cin >> ausencias;
	condicion = condicionEstudiante(nota, ausencias);
	cout << "La condicion del estudiante es: " << condicion << endl;
}

//6.	A un trabajador le pagan según las horas trabajadas, si la cantidad de horas es mayor a 40, 
//la tarifa por hora se incrementa en un 50 % para las horas extra.Realice un programa que se encargue
//de calcular y mostrar el salario bruto de 10 trabajadores, para 
//lo cual debe solicitar el salario por hora y las horas trabajadas por cada trabajador.Utilice funciones.

struct sEmpleado {
	string nombre_e;
	double h_trabajadas = 0;
	double salario_hora = 0;
	double salario_ord = 0;
	double salario_ext = 0;
	double salario_bruto = 0;
};

sEmpleado Empl;

sEmpleado Planilla[4];

sEmpleado Solicita_Info(sEmpleado Empl);
void Imprime_Planilla(sEmpleado Planilla[]);

void Calcula_Salario() {
	for (int i = 0; i < 4; i++)
	{
		Planilla[i] = Solicita_Info(Empl);
	}
	Imprime_Planilla(Planilla);
}


sEmpleado Solicita_Info(sEmpleado Empl) {
	cout << "\nIngrese el nombre: ";
	cin >> Empl.nombre_e;
	cout << "\nIngrese la cantidad de horas trabajadas: ";
	cin >> Empl.h_trabajadas;
	cout << "\nIngrese el Salario por Hora: ";
	cin >> Empl.salario_hora;
	if (Empl.h_trabajadas <= 40)
		Empl.salario_ord = Empl.h_trabajadas * Empl.salario_hora;
	else {
		Empl.salario_ord = 40 * Empl.salario_hora;
		Empl.salario_ext = (Empl.h_trabajadas - 40) * Empl.salario_hora * 1.5;
	}
	Empl.salario_bruto = Empl.salario_ord + Empl.salario_ext;
	return Empl;
}


void Imprime_Planilla(sEmpleado Planilla[]) {
	cout << "\n\n\n\tNombre" << setw(20) << "Horas Trabajadas" << setw(20) << "Salario x Hora" << setw(20) <<
		"Salario Ordinario" << setw(20) << "Salario Extra" << setw(20) << "Salario Bruto";
	for (int i = 0; i < 4; i++)
	{
		cout << "\n\t" << Planilla[i].nombre_e << setw(20) << Planilla[i].h_trabajadas << setw(20) << Planilla[i].salario_hora
			<< setw(20) << Planilla[i].salario_ord << setw(20) << Planilla[i].salario_ext << setw(20) << Planilla[i].salario_bruto;
	}
}

//7.	Los números romanos aún son utilizados para algunos propósitos.  Los enteros romanos se escriben de acuerdo a las siguientes reglas :
//•	Si una letra está seguida inmediatamente por una de igual o menor valor,  su valor se suma al total acumulado.Así, XX = 20, XV = 15 y VI = 6.
//•	Si una letra está seguida inmediatamente por una de mayor valor, su valor se sustrae del total acumulado.Así, IV = 4, XL = 40 y CM = 900.
//Escriba un programa que contenga una función romano_a_arabigo que reciba un string con un número en notación romana, y entregue el entero equivalente :
//>> > romano_a_arabigo('MCMXIV')
//1914

void pasarMayuscula(string& s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
}
int CalculaRomanos() {
	int ValoresDecimales[] = { 1000, 500, 100, 50, 10, 5, 1 };
	string PosicionesRomanos = "MDCLXVI"; // Para buscar el indice de la letra y asi encontrar el valor en ValoresDecimales
	string RomanoDelUsuario;
	char Letra;
	int resultado = 0;
	int PosicionLetra = 0;
	int IndiceDeLaLetra = 0;
	int ValorDecimalAnterior = 0;
	bool LetraEsValida = true;

	cout << "Calcular Numero Romano" << endl;
	cout << endl;
	cout << setw(45) << "M (1000) D (500) C (100) L (50) X (10) V (5) I (1)" << endl;
	cout << "\n\tEscriba el numero Romano:  \n\t";
	cin >> RomanoDelUsuario;
	pasarMayuscula(RomanoDelUsuario);
	cout << "\n\tEl numero ingresado es: " << RomanoDelUsuario << "\n\n";
	while (LetraEsValida && (PosicionLetra < RomanoDelUsuario.length()))
	{
		Letra = RomanoDelUsuario[PosicionLetra];
		IndiceDeLaLetra = PosicionesRomanos.find(Letra);
		if (IndiceDeLaLetra >= 0)
		{
			resultado += ValoresDecimales[IndiceDeLaLetra];
			if (ValoresDecimales[IndiceDeLaLetra] > ValorDecimalAnterior)
			{
				resultado -= 2 * ValorDecimalAnterior;
			}
			ValorDecimalAnterior = ValoresDecimales[IndiceDeLaLetra];
		}
		else
		{
			LetraEsValida = false;
			resultado = -1;
		}
		PosicionLetra++;
	}
	return resultado;
}

//8.	Un jugador debe lanzar dos dados numerados de 1 a 6, y su puntaje es la suma de los valores obtenidos.
//Un puntaje dado puede ser obtenido con varias combinaciones posibles.Por ejemplo, el puntaje 4 se logra 
//con las siguientes tres combinaciones : 1 + 3, 2 + 2 y 3 + 1.
//Escriba un programa que pregunte al usuario un puntaje, y muestre como resultado la cantidad de combinaciones 
//de dados con las que se puede obtener ese puntaje.


void CalculaDados() {
	int sumaDados = 0;
	cout << "Sumatoria de los dos dados: " << endl;
	cin >> sumaDados;
	switch (sumaDados)
	{
	case 2:
		cout << "1 + 1" << endl;
		break;
	case 3:
		cout << "2 + 1 y 1 + 2" << endl;
		break;
	case 4:
		cout << "3 + 1 , 2 + 2 y 1 + 3" << endl;
		break;
	case 5:
		cout << "4 + 1 , 3 + 2 , 2 + 3 y 1 + 4" << endl;
		break;
	case 6:
		cout << "5 + 1 , 4 + 2 , 3 + 3 , 2 + 4 y 1 + 5" << endl;
		break;
	case 7:
		cout << "6 + 1 , 5 + 2 , 4 + 3 , 3 + 4 , 2 + 5 y 1 + 6" << endl;
		break;
	case 8:
		cout << "6 + 2 , 5 + 3 , 4 + 4 , 3 + 5 y 2 + 6" << endl;
		break;
	case 9:
		cout << "6 + 3 , 5 + 4 , 4 + 5 y 3 + 6" << endl;
		break;
	case 10:
		cout << "6 + 4 , 5 + 5 y 4 + 6" << endl;
		break;
	case 11:
		cout << "6 + 5 y 5 + 6" << endl;
		break;
	case 12:
		cout << "6 + 6" << endl;
		break;
	default:
		cout << "Combinacion no valida" << endl;
		break;
	}
}

//9. Escriba un programa que pida al usuario que ingrese varios valores enteros, que pueden ser positivos 
//o negativos.Cuando se ingrese un cero, el programa debe terminar y mostrar un gráfico de cuántos valores 
//positivos y negativos fueron ingresados

void Grafico() {
	int num, posit, negat;
	posit = 0;
	negat = 0;
	cout << "Ingrese varios valores, termine con 0" << endl;
	cin >> num;
	while (num != 0)
	{
		if (num > 0)
			posit++;
		else
			negat++;
		cin >> num;
	}

	cout << "\n\tPositivos: ";
	for (int i = 0; i < posit; i++)
		cout << "*";

	cout << "\n\tNegativos: ";
	for (int i = 0; i < negat; i++)
		cout << "*";
}

//------------------------------------------------------------------------