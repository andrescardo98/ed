#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

//prototipos
void menu();
void funcionSwitch(int);
void agregarPila(Nodo *&, int);
void mostrarPila(Nodo *&);
void buscarElemento(Nodo *&, int);
void eliminarPila(Nodo *&, int &);

Nodo *pila = NULL;
    int valor;
    string pregunta;

Nodo *pilaAux = NULL;

int main(){

    menu();

    getch();
    return 0;
}

void menu(){
    cout<<"1. Insertar datos a la pila.\n2. Mostrar datos que contiene la pila.\n3. Buscar un elemento en la pila.\n4. Eliminar datos de la pila.\n5. Finalizar programa."<<endl;

    int opcion;
    cout<<"¿Qué opción seleccionas?: "<<endl;
    cin>>opcion;
    funcionSwitch(opcion);
}

void funcionSwitch(int opcion){
    switch (opcion)
    {
    case 1:
        do
    {
        cout<<"Ingrese el número: ";
        cin >> valor;
        agregarPila(pila,valor);

        cout<<"¿Desea ingresar otro número? s/n: ";
        cin>>pregunta;

    } while (pregunta == "S" || pregunta == "s");
        cout<<"Elementos agregados a pila"<<endl;
        menu();
        break;

    case 2:
        cout<<"Los datos de la pila son:"<<endl;
        mostrarPila(pila);
        menu();
        break;
        
    case 3:
        buscarElemento(pila,valor);
        menu();
        break;

    case 4:
        if (pregunta == "N" || pregunta == "n"){
        while (pila != NULL){
            eliminarPila(pila,valor);
            if (pila != NULL)
            {
                cout<<valor<<endl;
            }
            else{
                cout<<valor<<endl;
            }
        }
        }
        menu();
        break;
    
    case 5:
        cout<<"Programa finalizado...";
        break;

    default:
        cout<<"Seleccione una opción correcta"<<endl<<endl;
        menu();
        break;
    }
}

void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo(); //reservamos el espacio en memoria para nuevo_nodo
    nuevo_nodo ->dato = n; // igualar la parte dato a n y ponerlo en el nuevo nodo
    nuevo_nodo ->siguiente = pila; // poner el puntero e igualarlo a pila
    pila = nuevo_nodo; // igualar pila al nuevo nodo

}

void mostrarPila(Nodo *&pila){
    Nodo *aux = pila;
    while (aux != NULL)
    {
        agregarPila(pilaAux,aux->dato);
        aux = aux->siguiente;
    }
    Nodo *aux2 = pilaAux;
    while (aux2 != NULL)
    {
        cout<<"Dato: "<<aux2->dato<<endl;
        aux2 = aux2->siguiente;
    }
    
}

void buscarElemento(Nodo *&pila, int n){
    Nodo *actual_nodo = new Nodo();
    actual_nodo = pila;
    int nodoBuscado = 0;
    bool encontrado = false;
    cout<<"Ingrese el nodo a buscar: ";
    cin >> nodoBuscado;
    if (pila != NULL){
        while (actual_nodo != NULL && encontrado != true){
            if (actual_nodo->dato == nodoBuscado)
            {
                cout<<"El nodo con dato "<<nodoBuscado<<" fue encontrado"<<endl<<endl;
                encontrado = true;
            }
            actual_nodo = actual_nodo->siguiente;
        }
        if (encontrado == false)
        {
            cout<<"Nodo con dato "<<nodoBuscado<<" no fue encontrado"<<endl<<endl;
        }   
    }else{
        cout<<"La pila se encuentra vacía."<<endl;
    }

}

void eliminarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux ->dato;
    pila = aux ->siguiente;
    delete aux;

    cout << "Elemento eliminado de la pila: ";
}