#ifndef EDGE_H_INCLUDED
#define EDGE_H_INCLUDED

using namespace std;

class Aresta{
    private:
        int idDestino;
        Aresta* proximaAresta; 
        float peso;
        int idNo;

    public:
        Aresta(int idDestino, int idNo);
        ~Aresta();
        int getArestaId(); 
        int getIdNo(); 
        Aresta* getProximaAresta(); 
        float getPeso(); 
        void setProximaAresta(Aresta* aresta);
        void setPeso(float peso);

};

#endif