#include <iostream>
#include <string>
#define IPS 16.5

using namespace std;

struct EMPLEADO{
    string nombre;
    string apellido;
    int cic;
    int sueldo_bruto;
    int descuentos_varios;
    int calculo_ips(){
        return (sueldo_bruto*IPS)/100;
    };
    int sueldo_neto(){
        return sueldo_bruto-(calculo_ips()+descuentos_varios);
    };
    EMPLEADO(){nombre="Juan"; apellido="Perez"; cic=3558412; sueldo_bruto=2960000; descuentos_varios=960000;}
}empleado1;

int main(){

    cout<<"Empleado: "<<empleado1.nombre<<" "<<empleado1.apellido<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Sueldo Bruto: "<<empleado1.sueldo_bruto<<endl;
    cout<<"Descuentos: "<<empleado1.descuentos_varios<<endl;
    cout<<"IPS: "<<empleado1.calculo_ips()<<endl;
    cout<<"Sueldo Neto: "<<empleado1.sueldo_neto()<<endl;
    cin.get();

return 0;
}
