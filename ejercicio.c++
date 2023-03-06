// Hacer un programa para agregar números enteros a una pila, hasta que el usuario lo decida, 
//después mostrar todos los números introducidos en la pila.

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);

int main(){
    Nodo *pila = NULL;

    int numero;
    string continuar;
    do
    {
        cout<<"Ingrese un número: ";
        cin>>numero;
        agregarPila(pila, numero);
        cout<<"¿Desea ingresar un nuevo número? y/n: ";
        cin>>continuar;

    } while (continuar == "y");
    if (continuar == "n")
    {
        cout<<"Datos ingresados exitosamente"<<endl;   
    }
    
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo ->dato = n;
    nuevo_nodo ->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"Número "<<n<<" agregado a la pila exitosamente"<<endl;
}