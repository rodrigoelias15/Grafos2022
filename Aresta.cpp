#include "Aresta.h"
#include <iostream>

using namespace std;

/**************************************************************************************************
 * Defining the Aresta's methods
 **************************************************************************************************/

// Constructor
Aresta::Aresta(int target_id)
{

    this->idAresta = target_id;
    this->proximaAresta = nullptr;
    this->peso = 0;
}

// Destructor
Aresta::~Aresta()
{

    if (this->proximaAresta != nullptr)
    {
        delete this->proximaAresta;
        this->proximaAresta = nullptr;
    }
}

// Getters
int Aresta::getArestaId()
{

    return this->idAresta;
}

Aresta *Aresta::getProximaAresta()
{

    return this->proximaAresta;
}

float Aresta::getPeso()
{

    return this->peso;
}

// Setters
void Aresta::setProximaAresta(Aresta *aresta)
{

    this->proximaAresta = aresta;
}

void Aresta::setPeso(float peso)
{

    this->peso = peso;
}