#include <iostream>
#include <fstream>

using namespace std;


int main () {
    fstream ficheroEntrada;
    string nombre;
    string frase;

    cout << "Nombre del archivo: ";
    getline(cin,nombre);


    ficheroEntrada.open(nombre.c_str(), ios::in);

    if (ficheroEntrada.is_open()){
        cout<<"Fichero encontrado... Mostrando..."<<endl;
        while (!ficheroEntrada.eof()) {
            getline(ficheroEntrada, frase);
            cout <<"Leyendo: "<<frase<<endl;
        }
        cout<<"Cerrando..."<<endl;
        ficheroEntrada.close();
    }
    else {
        cout<<"Fichero inexistente... Creando..."<<endl;
        ofstream fs(nombre.c_str());
        cout<<"Escribiendo en el archivo..."<<endl;
        fs << "Linea escrita programaticamente..." << EOF;
        cout<<"Cerrando..."<<endl;
        fs.close();
        cout<<"Abriendo nuevamente..."<<endl;
        ifstream fe(nombre.c_str());
        cout<<"Mostrando..."<<endl;
        while (!ficheroEntrada.eof()) {
            getline(ficheroEntrada, frase);
            cout <<"Leyendo: "<<frase<<endl;
        }
    }
    return 0;
}
