/*1. ESCRIBA UN PROGRAMA UN PROGRAMA QUE LEA 2 NÚMEROS Y DETERMINE EL CUÁL ES EL MAYOR DE ELLOS.*/

#include<iostream>

using namespace std;

int main(){
	int D1, D2;
	
	cout<<"Ingrese 2 numeros: ";
	cin>>D1>>D2;
	if(D1==D2){
		cout<<"Ambos numeros son iguales";
	}
	else if (D1>D2){
		cout<<"El mayor de los numeros es: "<<D1;
	}
	else{
	cout<<"El mayor de los numeros es: "<<D2;
	}
	
	return 0;
}