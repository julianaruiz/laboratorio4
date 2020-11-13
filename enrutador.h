#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <iostream>
#include <string>
#include <map>

using namespace std;

class enrutador
{
    string clave;
    int valor;
public:
    enrutador();
    map<string,int> rutas(string clavP);
};

#endif // ENRUTADOR_H
