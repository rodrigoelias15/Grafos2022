#ifndef EDGE_H_INCLUDED
#define EDGE_H_INCLUDED

using namespace std;

class Aresta
{
private:
    int idAresta;
    Aresta *proximaAresta;
    float peso;

public:
    Aresta(int idAresta);
    ~Aresta();
    int getArestaId();
    int getIdNo();
    Aresta *getProximaAresta();
    float getPeso();
    void setProximaAresta(Aresta *aresta);
    void setPeso(float peso);
};

#endif