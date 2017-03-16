#include <iostream>

using namespace std;

static void sumar_matrices (int aa[], int bb[], int cc[], int fila, int columna) {
    for (int f=0; f<fila; f++){
        for (int c=0; c<columna; c++){
            cc[(f*columna+c)]=aa[(f*columna+c)]+bb[(f*columna+c)];
        }
    }
}

static int digitos_numero(int numero){
    //Contar los digitos de un numero entero
    int contador = 0, nro = numero;
    while (nro){
        nro = nro/10;
        contador++;
    }
    return contador;
}

static void mostrar_matrices (int m[], int fila, int columna) {
    int digitos;
    int dimension = fila*columna;

    for (int f=0; f<fila; f++){
        for (int c=0; c<columna; c++){
            digitos = digitos_numero(m[(f*columna+c)]);
            if (digitos<0 && digitos>10){
                if(c > 0){
                    cout<<" ";
                }
                cout<<"|  ";
            } else {
                if(c > 0){
                    cout<<" ";
                }
                cout<<"| ";
            }
            cout<<m[(f*columna+c)];
            if(digitos<0 && digitos>10){
                if (c == columna - 1){
                    cout<<"  |";
                }
            } else {
                if (c == columna - 1){
                    cout<<" |";
                }
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

int main () {
    int fila, columna;
    sys
    cout<<"Dimension para FILA: ";
    cin>>fila;
    cout<<"Dimension para COLUMNA: ";
    cin>>columna;
    cout<<"FILAS: "<<fila<<", COLUMNAS: "<<columna<<endl;
    int aa[fila*columna], bb[fila*columna], cc[fila*columna];

    // Llenar las matrices.
    for (int f=0; f<fila; f++) {
        for(int c=0; c<columna; c++){
            aa[f*columna+c]= c+f+2;
            bb[f*columna+c]= c*f+2;
        }
    }

    sumar_matrices(aa, bb, cc, fila, columna);

    cout<<"Vector AA: "<<endl;
    mostrar_matrices(aa, fila, columna);
    cout<<"Vector BB: "<<endl;
    mostrar_matrices(bb, fila, columna);
    cout<<"Vector CC: "<<endl;
    mostrar_matrices(cc, fila, columna);

    return 0;
}
