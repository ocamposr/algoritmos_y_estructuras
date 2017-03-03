#include <iostream>

const int DIMENSION=3;

using namespace std;

static void ejemplo() {

    int a[DIMENSION*DIMENSION];
    int aa[DIMENSION][DIMENSION];

    for(int f=0;f<(DIMENSION*DIMENSION);f++){
        a[f]= f+2;
    }

    for (int f=0;f<DIMENSION;f++){
        for(int c=0;c<DIMENSION;c++){
            aa[f][c]=(f*DIMENSION+c)+2;
        }
    }

    cout<<"ARRAY Unidimensional de una DIMENSION: "<<DIMENSION*DIMENSION<<endl;
    for(int f=0;f<(DIMENSION*DIMENSION);f++){
        cout<<a[f]<<", ";
    }
    cout<<endl<<endl;
    cout<<"ARRAY Multidimensional de una DIMENSION: "<<DIMENSION<<"x"<<DIMENSION<<"->"<<DIMENSION*DIMENSION<<endl;
    for (int f=0;f<DIMENSION;f++){
        for(int c=0;c<DIMENSION;c++){
            cout<<aa[f][c]<<", ";
        }
    }
    cout<<endl<<endl;
}
