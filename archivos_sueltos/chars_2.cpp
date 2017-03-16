#include <iostream>
#include <string.h>

using namespace std;
int main(){
    char texto1[]="Don Pepito";
    char texto2[]=" y ";
    char texto3[]="Don Jose";

    string Mensaje;
    Mensaje="Hola!";

    cout<<texto1<<"tipo: "<<decltype(texto1)<<endl;
    cout<<texto2<<endl;
    cout<<texto3<<endl;
    strcat(texto1,texto2);
    strcat(texto1,texto3);
    cout<<texto1<<endl;
    cout<<Mensaje<<endl;
    getchar();
return 0;
}

