/*
 enrutadores:
 menú
 1.Modelar enrutadores.
 2.Modelar red.
 3. Costos.
 4. Caminos.
 5. Cargar redes desde archivos.
 map<string,class> enrutador;

 vector que almacene las claves y compare si en cada enrutador están todas, si no es asi se le agregará el
 costo menor(función)
*/

#include <iostream>
#include <string>
#include <map>
#include "enrutador.h"

using namespace std;

int main()
{
    string clav,cosa="";
    enrutador enru;
    map<string,int> ruta, rutas;
    map<string,map<string,int>> red,red2;
    for(int i=0; i<2;i++){
        cout <<"clave: ";
        cin >> clav;
        ruta=enru.rutas(clav);
        red[clav]=ruta;
    }
    red2=red;
    map<string,map<string,int>>::iterator iter;
    map<string,int>::iterator comp;
    for(iter=red2.begin();iter!=red2.end();iter++){
        for(auto com=begin(iter->second);com!=end(iter->second);com++){
            if(com->second!=0)
                rutas[iter->first+com->first]=com->second;

        }
    }
    ruta=rutas;
    for(comp=rutas.begin();comp!=rutas.end();comp++)
        cout << comp->first << ": " << comp->second << endl;



    return 0;
}
