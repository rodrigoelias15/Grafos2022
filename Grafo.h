// /**************************************************************************************************
//  * Implementation of the TAD Grafo
// **************************************************************************************************/

// #ifndef GRAPH_H_INCLUDED
// #define GRAPH_H_INCLUDED
// #include "No.h"
// #include <fstream>
// #include <stack>
// #include <list>
// #include <vector>
// #include <random>

// using namespace std;

// class Grafo{
//     private:
//         int ordem;
//         int nGrupo;
//         int nArestas;
//         bool eDirecionado;
//         bool temPesoAresta;
//         bool temPesoNo;
//         No* primeiroNo;
//         No* ultimoNo;

//     public:
//         Grafo(int ordem, bool eDirecionado, bool temPesoAresta, bool temPesoNo);
//         ~Grafo();

// };

// #endif

#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include "No.h"
#include <fstream>
#include <stack>
#include <list>

using namespace std;

class Grafo
{

    // Atributes
private:
    int ordem;
    int numArestas;
    bool direcionado;
    bool arestaPonderada;
    bool noPonderado;
    No *primeiroNo;
    No *ultimoNo;

public:
    // Constructor
    Grafo(int ordem, bool direcionado, bool arestaPonderada, bool noPonderado);
    // Destructor
    ~Grafo();
    // Getters
    int getOrdem();
    int getNumArestas();
    bool getDirecionado();
    bool getArestaPoderada();
    bool getNoPonderado();
    No *getPrimeiroNo();
    No *getUltimoNo();
    // Other methods
    void inserirNo(int id);
    void inserirAresta(int id, int target_id, float weight);
    void removeNo(int id);
    bool buscarNo(int id);
    No *getNo(int id);

    // methods phase1
    // void topologicalSorting();
    // void breadthFirstSearch(ofstream &output_file);
    // Grafo *getVertexInduced(int *listIdNodes);
    // Grafo *agmKuskal();
    // Grafo *agmPrim();
    // float floydMarshall(int idSource, int idTarget);
    // float dijkstra(int idSource, int idTarget);

    // // methods phase1
    // float greed();
    // float greedRandom();
    // float greedRactiveRandom();

private:
    // Auxiliar methods
};

#endif // GRAPH_H_INCLUDED