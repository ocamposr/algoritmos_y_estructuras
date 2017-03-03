#include <iostream>

using namespace std;

void sumar (int **ma, int **mb, int **mc, int fila, int columna) {
    for (int f=0; f<fila; f++){
        for (int c=0; c<columna; c++){
            //((int *)mc + columna*f)[c]=((int *)ma + columna*f)[c] + ((int *)mb + columna*f)[c];
            mc[f][c]=ma[f][c]+mb[f][c];
        }
    }
}

void mostrar (int **m, int fila, int columna) {
    for (int f=0; f<fila; f++){
        for (int c=0; c<columna; c++){
            cout<<m[f][c]<<endl;
        }
    }
    cout<<endl<<endl;
}

void principal () {
    int fila, columna;

    cout<<"Dimension para FILA: ";
    cin>>fila;
    cout<<"Dimension para COLUMNA: ";
    cin>>columna;
    cout<<"FILAS: "<<fila<<", COLUMNAS: "<<columna<<endl;
    int aa[fila][columna], bb[fila][columna], cc[fila][columna];

    // Llenar las matrices.
    for (int f=0; f<fila; f++) {
        for(int c=0; c<columna; c++){
            aa[f][c]= c+f*2;
            bb[f][c]= c*f-2;
        }
    }

    sumar((int **)aa, (int **)bb, (int **)cc, fila, columna);

    cout<<"Vector AA: "<<endl;
    mostrar((int **)aa, fila, columna);
    cout<<"Vector BB: "<<endl;
    mostrar((int **)bb, fila, columna);
    cout<<"Vector CC: "<<endl;
    mostrar((int **)cc, fila, columna);
}
