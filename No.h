
#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include "Aresta.h"

using namespace std;

class No{

    private:
        Aresta* primeiraAresta;
        Aresta* ultimaAresta;
        int id;
        int grupo;
        unsigned int grauEntrada; 
        unsigned int grauSaida; 
        float pesoNo; 
        No* proximoNo; 
        bool inserido;

    public:
        No(int id, int grupo);
        ~No();
        Aresta* getPrimeiraAresta();
        Aresta* getUltimaAresta();

};

#endif 