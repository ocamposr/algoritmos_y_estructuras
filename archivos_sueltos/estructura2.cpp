#include <iostream>
#include <string>

using namespace std;

struct DIRECCION{
    string dir1;
    string dir2;
    DIRECCION(){dir2="Sin registro";};
};

struct TELEFONO{
    string linea_baja;
    string linea_alta;
    string celular1;
    string celular2;
    TELEFONO(){linea_alta="No tiene"; celular2="No tiene";};
};

struct PERSONA{
    string nombre;
    string apellido;
    int cic;
    DIRECCION domicilios;
    TELEFONO telefonos;
    PERSONA(){nombre="Juan"; apellido="Perez"; cic=3558412;};
}p1;

int main(){
    // p1.nombre = "Jose";
    p1.domicilios.dir1 = "Aca cerca";
    p1.domicilios.dir2 = "Casa de su abuela";
    cout<<"Personas: "<<p1.nombre<<" "<<p1.apellido<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Direccion1: "<<p1.domicilios.dir1<<endl;
    cout<<"Direccion2: "<<p1.domicilios.dir2<<endl;
    cout<<"Linea Baja: "<<p1.telefonos.linea_baja<<endl;
    cout<<"Linea Alta: "<<p1.telefonos.linea_alta<<endl;
    cout<<"Celular1: "<<p1.telefonos.celular1<<endl;
    cout<<"Celular2: "<<p1.telefonos.celular2<<endl;
    cin.get();

return 0;
}
