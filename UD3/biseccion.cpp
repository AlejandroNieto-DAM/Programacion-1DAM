#include <iostream>
using namespace std;

/*

@brief Lee los datos de entrada necesarios para realiar la operación dado el valor @precision.
@param double precision para calcular la solución.
@pre precision debe estar entre 0 y 1.
@return cambia el valor de precision.
@post precision no debe cambiar su valor durante el programa.

*/

void leerPrecision (double &precision) {

	cout << "Escribe la precision deseada: ";
	cin >> precision;

}

/*

@brief Calcula la solución de la ecuación de acuerdo a precision y los calculos realizados.
@param double precision, double izq, double der, double centro que son necesarios para saber la solución.
@pre precision < der - izq.
@return cambia el valor de izq y der.
@post la solución debe ajutarse a un double entre 0 y 1.

*/

void calcularDerIzq (double centro, double &izq, double &der, double precision){

	while(der - izq > precision) {

			centro = (der+izq)/2;

			if(centro * centro * centro + centro-1 < 0) {

				izq = centro;

			} else {

				der = centro;

			}

	}

}

/*

@brief Imprime la solucición de acuerdo a izq y der.
@param double der y double izq para imprimir el resultado necesario por pantalla.
@pre debe estar activa la salida por pantalla.
@return No devuelve nada.

*/

void imprimirResultado (double der, double izq){

	cout << "Solucion: " << (der+izq)/2 << endl;

}

int main(){

	double precision;
	double izq = 0, der = 1, centro;

	leerPrecision(precision);
	calcularDerIzq(centro, izq, der, precision);
	imprimirResultado(der, izq);


}