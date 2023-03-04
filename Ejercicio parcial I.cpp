
//declaramos las librerias
#include<iostream>
#include<conio.h>
//declaramos el espacio de nombre
using namespace std;
//declaramos la funcion principal
int main()

{
//declaramos variables
int  f, c;
int A[2][2];
//mostramos un mensaje al usuario para que ingrese los datos
cout<<"Bienvenido"<<endl<<endl;

cout<<"Ingrese el tamanio de la matriz"<<endl;
cout<<"ingrese el numero de filas"<<endl;
cin>>f;
cout<<"ingrese el numero de columnas"<<endl;
cin>>c;
cout<<"porfavor ingrese 4 numeros enteros"<<endl;

//hacemos un ciclo for para que el programa lea los datos de las filas y un for anidado para las columnas

for(int i=0; i<f; i++)
{
	for(int j=0; j<c; j++)
	{
//decimos al programa que lea la matriz	
	cin>>A[i][j];
	}
	
}
//declaramos ptro ciclo for anidado para mostrara la matriz en pantalla
for(int i=0; i<f; i++)
{
	for(int j=0; j<c; j++)
	{
//mostramos la matriz en pantalla

	cout<<A[i][j]<<" ";
	}
	cout<<"\n";
}
cout<<"\n";
//declaramos la variablepara alamacenar el resultado
int resultado=0;
//declaramos otro ciclo for para realizar la suma
for(int i=0; i<f; i++)
{
	for(int j=0; j<c; j++)
	{
	resultado +=A[i][j];
	
	}
}
//mostramos el resultado de la suma
 cout<<"El resultado de la suma de la matriz es: "<<resultado<<endl;
 
 //declaramos un if else para determinar si el resultado de la suma es par o impar
 if(resultado %2 == 0)
 {
//mostramos si es par o impar 
 cout<<"La suma de la matriz es par";
 }
 	else
	 {
	 
 	cout<<"la suma de la matriz es impar";
    }
    return 0;
}