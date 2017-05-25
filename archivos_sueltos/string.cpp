#include <string>
#include <iostream>

using namespace std;

int main() {
    string texto1, texto2 = "El nuevo ", texto3("estandar 'string' es mas ");

    texto1 = texto2 + texto3 + " interesante... ";
    cout << texto1 << "\n";
    string subcadena (texto1, 2, 6); // 6 letras de texto1, desde la tercera
    cout << subcadena << "\n";
    string subcadena2;
    subcadena2 = texto1.substr(0, 5); // 5 letras de texto1, desde el comienzo
    cout << subcadena2 << "\n";
    texto1.insert(texto1.size(), "verdad? "); // Inserto un texto en la posicion 6
    cout << texto1 << "\n";
    texto2.replace(0, 1, "Te"); // Cambio 2 letras en la posicion 2
    cout << texto2 << "\n";
    cout << "La longitud de texto1 es " << texto1.size() << "\n";
    cout << "La quinta letra de texto1 es " << texto1[4]
    << " o bien " << texto1.at(4) << "\n";

    if (texto2.size() == 3){
        cout << "texto2 tiene 3 caracteres" << "\n";
    } else{
        cout << "texto2 tiene mas o menos de 3 caracteres"<< endl;
    }

    for (unsigned int i=0; i<texto2.size();i++){
        cout<<texto2[i]<< endl;
    }

    return 0;
}
