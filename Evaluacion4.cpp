#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <math.h>

using namespace std;

main (){
	
	int num=1;
	int con=0;
	int sum=0;
	int may=0;
	int res=0;
	long long men=1000000000000000000000000000000000000000;

		cout << "\n\n                           .: TALLER No. 3 :.                           ";
		cout << "\n                   .: DANIEL ALBERTO SALAZAR ERAZO :.                           \n\n";

		cout << "Programa que contabiliza, calcula la sumatoria, imprime el numero menor y mayor de todos los numeros ingresados.\n" << endl;
		cout << "Para salir del programa digite el numero cero (0)\n" << endl;

	while (num != 0){
		cout << "Ingrese un numero: ";
		cin >> num;
		
		// Cantidad de numeros leidos
		con= con+1 ;
		
		// Sumatoria de todos los numeros ingresados
		sum = sum + num;
		
		// Numero mayor
		if(num > may){
			may = num;
		}
		
		// Numero menor
		if(num < men){
			res = num;
			
			if (num != 0){
			men = res;	
			}
		}

	};
	

	if (con-1 != 0) {
	
		// 1. Suma de todos los numeros ingresados
			cout << "\nLa suma de todos los numeros leidos es: " << sum << endl;	
			
		// 2. El numero mayor
			cout << "\nEl numero mayor de todos los numeros leidos es: " << may << endl;	
			
			
		// 3. El numero menor
			cout << "\nEl numero menor de todos los numeros leidos es: " << men << endl;	
			
		// 4. El promedio de la sumatoria
			cout << "\nEl promedio de la suamtoria de los numeros leidos es: " << sum / (con - 1.0) << endl;	
		
	
		// 5. Cantidad de numeros leidos
			cout << "\nLa cantidad de numeros leidos es: " << con - 1 << endl;	
	}


	cout << endl;	
	system("pause");
}
