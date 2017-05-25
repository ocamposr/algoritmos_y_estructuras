#include <stdio.h>
#include <iostream>

#define CONSTANTE 10

// Programa ejemplo

void saludar(char[10] nombre){
    cout<<"Hola "<<nombre<<"!"<<endl;
}

int main(){

    char[10] nombre;
    nombre = "Juan";

    saludar(nombre);

    return 0;
}
