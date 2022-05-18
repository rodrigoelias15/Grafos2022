#include "Grafo.h"
#include "No.h"
#include "Aresta.h"
#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <list>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <float.h>
#include <iomanip>

using namespace std;

Grafo::Grafo(int ordem, bool direcionado, bool arestaPonderada, bool noPonderado)
{

    this->ordem = ordem;
    this->direcionado = direcionado;
    this->arestaPonderada = arestaPonderada;
    this->noPonderado = noPonderado;
    this->primeiroNo = this->ultimoNo = nullptr;
    this->numArestas = 0;
}

Grafo::~Grafo()
{

    No *proximoNo = this->primeiroNo;

    while (proximoNo != nullptr)
    {

        proximoNo->removerTodasArestas();
        No *aux_node = proximoNo->getProximoNo();
        delete proximoNo;
        proximoNo = aux_node;
    }
}

// Getters
int Grafo::getOrdem()
{

    return this->ordem;
}
int Grafo::getNumArestas()
{

    return this->numArestas;
}
// Function that verifies if the graph is direcionado
bool Grafo::getDirecionado()
{

    return this->direcionado;
}
// Function that verifies if the graph is weighted at the edges
bool Grafo::getArestaPoderada()
{

    return this->arestaPonderada;
}

// Function that verifies if the graph is weighted at the nodes
bool Grafo::getNoPonderado()
{

    return this->noPonderado;
}

No *Grafo::getPrimeiroNo()
{

    return this->primeiroNo;
}

No *Grafo::getUltimoNo()
{

    return this->ultimoNo;
}

// Other methods
/*
    The outdegree attribute of nodes is used as a counter for the number of edges in the graph.
    This allows the correct updating of the numbers of edges in the graph being direcionado or not.
*/
void Grafo::inserirNo(int id)
{
}

void Grafo::inserirAresta(int id, int target_id, float weight)
{
}

void Grafo::removeNo(int id)
{
}

bool Grafo::buscarNo(int id)
{
}

No *Grafo::getNo(int id)
{
}

// // Function that prints a set of edges belongs breadth tree

// void Grafo::breadthFirstSearch(ofstream &output_file)
// {
// }

// float Grafo::floydMarshall(int idSource, int idTarget)
// {
// }

// float Grafo::dijkstra(int idSource, int idTarget)
// {
// }

// // function that prints a topological sorting
// void topologicalSorting()
// {
// }

// void breadthFirstSearch(ofstream &output_file)
// {
// }
// Grafo *getVertexInduced(int *listIdNodes)
// {
// }

// Grafo *agmKuskal()
// {
// }
// Grafo *agmPrim()
// {
// }