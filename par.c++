#include <iostream>
#include <conio.h>
using namespace::std;

int main(){
    int num, *dir_num;
    cout << "Ingrese un número: ";
    cin >> num;
    dir_num = &num;

    if(num % 2 == 0){
        cout << "El número es par!" << endl << endl;
    }else{
        cout << "El número es impar" << endl << endl;
    }
    cout << "Dirección de memoria del número: " << dir_num << endl;

    getch();
    return 0;
}