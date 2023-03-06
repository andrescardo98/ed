#include <iostream>
#include <conio.h>

using namespace::std;
// Declaración del nodo tipo Nodo, con un valor dato y con un apuntador siguiente
struct Nodo {
    int dato;
    Nodo *siguiente;
    
} *primero; //declaración de apuntador cabeza


void insertarNodo();
void desplegarPila();

int main(){
    insertarNodo();
    insertarNodo();
    insertarNodo();
    cout << "La pila queda así" << endl << endl;
    desplegarPila();
}

void insertarNodo(){
    Nodo* nuevo_nodo = new Nodo();
    cout << "Ingrese el dato que contendrá el nuevo Nodo: ";
    cin >> nuevo_nodo->dato;
    
    nuevo_nodo->siguiente = primero;
    primero = nuevo_nodo;

    cout << "Nodo Ingresado" << endl << endl;
}

void desplegarPila(){
    Nodo* actual = new Nodo();
    actual = primero;

    if (primero != NULL){
        while (actual != NULL){
            cout << endl << " " << actual->dato;
            actual = actual->siguiente;
        }
        
    }else{
        cout << endl << "La pila se encuentra vacía" << endl << endl;
    }
}

//g++ -o pila ./pila.c++