#include <iostream>

using namespace std;

void sumar (int a[], int b[], int c[], int dimension){
    for (int i=0; i<dimension; i++){
        c[i]= a[i] + b[i];
    }
}

void mostrar (int v[], int dimension) {
    for (int i=0; i<dimension; i++){
        cout<<v[i]<<endl;
    }
    cout<<endl<<endl;
}

int main_2 () {
    int dimension2;

    cout<<"Dimension para VECTORES: ";
    cin>>dimension2; cout<<endl;
    cout<<"La dimension dada es: "<<dimension2<<endl;
    int aa[dimension2], bb[dimension2], cc[dimension2];

    for (int i=0; i<dimension2; i++) {
        aa[i]= i*2;
        bb[i]= i+2;
    }

    sumar(aa, bb, cc, dimension2);

    cout<<"Vector AA: "<<endl;
    mostrar(aa, dimension2);
    cout<<"Vector BB: "<<endl;
    mostrar(bb, dimension2);
    cout<<"Vector CC: "<<endl;
    mostrar(cc, dimension2);

    return 0;
}
