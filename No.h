
#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include "Aresta.h"

using namespace std;

class No
{

private:
    Aresta *primeiraAresta;
    Aresta *ultimaAresta;
    int id;
    // int grupo;
    unsigned int grauEntrada;
    unsigned int grauSaida;
    float pesoNo;
    No *proximoNo;
    bool inserido;

public:
    No(int id);
    ~No();
    Aresta *getPrimeiraAresta();
    Aresta *getUltimaAresta();
    int getId();
    int getGrupo();
    int getGrauEntrada();
    int getGrauSaida();
    float getPeso();
    No *getProximoNo();
    bool getInserido();
    // Setters
    void setProximoNo(No *no);
    void setPeso(float peso);
    void setInserido(bool inserido);
    // Other methods
    bool procurarAresta(int idDestino);
    bool inserirAresta(int idDestino, float peso);
    void removerTodasArestas();
    int removerAresta(int id, bool direcionado, No *target_no);
    void incrementarGrauSaida();
    void decrementarGrauSaida();
    void incrementarGrauEntrada();
    void degrementarGrauEntrada();
    Aresta *temArestaEntre(int idDestino);
};

#endif