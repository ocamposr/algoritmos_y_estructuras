#include <iostream>

using namespace std;
int main(){
    char Saludo[5] = "HALO";
    for (int i=0; i<5; i++){
        if (Saludo[i]=='A'){
            Saludo[i]='1';
        }
        cout<<Saludo[i]<<endl;
    }
    system("pause");
return 0;
}
