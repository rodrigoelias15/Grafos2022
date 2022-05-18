#include "No.h"
#include "Aresta.h"
#include <iostream>

using namespace std;
No::No(int id)
{
    this->id = id;
    this->inserido = false;
    this->grauEntrada = 0;
    this->grauSaida = 0;
    this->pesoNo = 1;
    this->proximoNo = nullptr;
    this->ultimaAresta = nullptr;
    this->primeiraAresta = nullptr;
};

No::~No()
{

    Aresta *proximaAresta = this->primeiraAresta;

    while (proximaAresta != nullptr)
    {
        Aresta *arestaAux = proximaAresta->getProximaAresta();
        delete proximaAresta;
        proximaAresta = arestaAux;
    }
};

Aresta *No::getPrimeiraAresta()
{

    return this->primeiraAresta;
}

Aresta *No::getUltimaAresta()
{

    return this->ultimaAresta;
}

int No::getId()
{

    return this->id;
}

// int No::getGrupo()
// {

//     return this->grupo;
// }

int No::getGrauEntrada()
{

    return this->grauEntrada;
}

int No::getGrauSaida()
{

    return this->grauSaida;
}

float No::getPeso()
{

    return this->pesoNo;
}

No *No::getProximoNo()
{

    return this->proximoNo;
}

bool No::getInserido()
{

    return this->inserido;
}

// Setters

void No::setProximoNo(No *no)
{

    this->proximoNo = no;
}

void No::setPeso(float peso)
{

    this->pesoNo = peso;
}

void No::setInserido(bool inserido)
{

    this->inserido = inserido;
}

// Other methods
bool No::inserirAresta(int idAresta, float peso)
{
    // Verifies whether there are at least one edge in the No (Verifica se existe pelo menos uma aresta no n�)
    if (!this->procurarAresta(idAresta))
    {
        if (this->primeiraAresta != nullptr)
        {
            // Allocating the new edge and keeping the integrity of the edge list (Alocando a nova aresta e mantendo a integridade de lista de arestas)
            Aresta *edge = new Aresta(idAresta, this->getId());
            edge->setPeso(peso);
            this->ultimaAresta->setProximaAresta(edge);
            this->ultimaAresta = edge;
        }
        else
        {
            // Allocating the new edge and keeping the integrity of the edge list
            this->primeiraAresta = new Aresta(idAresta, this->getId());
            this->primeiraAresta->setPeso(peso);
            this->ultimaAresta = this->primeiraAresta;
        }
        // cout << "Inseriu Aresta ---------------->>>>" << endl;
        return true;
    }
    else
        return false;
    // cout << "-------Aresta " << this->getId() << " " << idAresta << " ja existe no grafo-------" << endl;
}

void No::removerTodasArestas()
{
    // Verifies whether there are at least one edge in the No
    if (this->primeiraAresta != nullptr)
    {

        Aresta *next = nullptr;
        Aresta *aux = this->primeiraAresta;
        // Removing all edges of the No
        while (aux != nullptr)
        {

            next = aux->getProximaAresta();
            delete aux;
            // aux = next;

        } /// fun��o duvidosa (n�o teria que atualizar aux?)
    }

    this->primeiraAresta = this->ultimaAresta = nullptr;
}

int No::removerAresta(int id, bool direcionado, No *no)
{
    // Verifies whether the edge to remove is in the No
    if (this->procurarAresta(id))
    {

        Aresta *aux = this->primeiraAresta;
        Aresta *previous = nullptr;
        // Searching for the edge to be removed
        while (aux->getArestaId() != id)
        {

            previous = aux;
            aux = aux->getProximaAresta();
        }
        // Keeping the integrity of the edge list
        if (previous != nullptr)
            previous->setProximaAresta(aux->getProximaAresta());

        else
            this->primeiraAresta = aux->getProximaAresta();

        if (aux == this->ultimaAresta)
            this->ultimaAresta = previous;

        if (aux->getProximaAresta() == this->ultimaAresta)
            this->ultimaAresta = aux->getProximaAresta();

        delete aux;
        // Verifies whether the graph is directed
        if (direcionado)
            this->decrementarGrauSaida();

        else
        {

            this->degrementarGrauEntrada();
            no->degrementarGrauEntrada();
        }

        return 1;
    }

    return 0;
}

bool No::procurarAresta(int idAresta)
{
    // Verifies whether there are at least one edge in the No
    if (this->primeiraAresta != nullptr)
    {
        // Searching for a specific edge of target id equal to target id
        for (Aresta *aux = this->primeiraAresta; aux != nullptr; aux = aux->getProximaAresta())
            if (aux->getArestaId() == idAresta)
                return true;
    }

    return false;
}

void No::incrementarGrauEntrada()
{

    this->grauEntrada++;
}

void No::incrementarGrauSaida()
{

    this->grauSaida++;
}

void No::degrementarGrauEntrada()
{

    this->grauEntrada--;
}

void No::decrementarGrauSaida()
{

    this->grauSaida--;
}

Aresta *No::temArestaEntre(int idAresta)
{

    for (Aresta *auxAresta = this->primeiraAresta; auxAresta != nullptr; auxAresta = auxAresta->getProximaAresta())
    {
        if (auxAresta->getArestaId() == idAresta)
            return auxAresta;
    }
    return nullptr;
}