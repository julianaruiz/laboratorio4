#include "enrutador.h"

enrutador::enrutador()
{
    clave="";
    valor=0;
}

map<string, int> enrutador::rutas(string clavP)
{
    int valor;
    string ruta, clave;
    map<string,int> rutaDirecta;

    cout << "Rutas directas: ";
    cin >> ruta;
    for (unsigned int i=0;i<ruta.length();i++){
        clave=ruta[i];
        if(i==0)
            rutaDirecta[clavP]=0;

        cout << "Costo ruta de " << clavP << " a " << ruta[i] << endl;
        cin >> valor;
        rutaDirecta[clave]=valor;

    }
    return rutaDirecta;
}
