/**************************************************************************************************
 * Implementation of the TAD Graph
**************************************************************************************************/

#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include "No.h"
#include <fstream>
#include <stack>
#include <list>
#include <vector>
#include <random>

using namespace std;

class Grafo{
    private:
        int ordem;
        int nGrupo;
        int nArestas;
        bool eDirecionado;
        bool temPesoAresta;
        bool temPesoNo;
        No* primeiroNo;
        No* ultimoNo;

    public:
        Grafo(int ordem, bool eDirecionado, bool temPesoAresta, bool temPesoNo);
        ~Grafo();

};

#endif