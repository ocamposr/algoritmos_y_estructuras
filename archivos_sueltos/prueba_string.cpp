#include <iostream>
#include <string>

using namespace std;

string prueba;

int main () {
    cout << "Ingrese texto con espacio: " << flush;
    getline(cin, prueba);

    cout << prueba;

    return 0;
}
