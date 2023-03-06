#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //prototipo
void eliminarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int valor;

    cout<<"Digite el primer número: ";
    cin >> valor;
    agregarPila(pila,valor);

    cout<<"Digite el segundo número: ";
    cin >> valor;
    agregarPila(pila,valor);

    cout<<"Digite el tercer número: ";
    cin >> valor;
    agregarPila(pila,valor);

    while(pila != NULL){
        eliminarPila(pila,valor);
        if (pila != NULL){
            cout<<valor<<endl;
        }
        else{
            cout<<valor;
        }
    }

    getch();
    return 0;
}

void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo(); //reservamos el espacio en memoria para nuevo_nodo
    nuevo_nodo ->dato = n; // igualar la parte dato a n y ponerlo en el nuevo nodo
    nuevo_nodo ->siguiente = pila; // poner el puntero e igualarlo a pila
    pila = nuevo_nodo; // igualar pila al nuevo nodo

    cout << "Elemento " <<n<<" agregado a la Pila correctamente!"<<endl;
}

void eliminarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux ->dato;
    pila = aux ->siguiente;
    delete aux;

    cout << "Elemento eliminado de la pila: ";
}