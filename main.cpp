#include <iostream>
using namespace std;
#include "No.h"

int main(int argc, char const *argv[])
{
    cout << "<< MENU >>" << endl << endl;
    
    cout << "[1] Fecho transitivo direto do vértice" << endl << "Parâmetro: Id de um vértice de um grafo direcionado" << endl << endl;
    
    cout << "[2] Fecho transitivo indireto do vértice" << endl << "Parâmetro: Id de um vértice de um grafo direcionado" << endl << endl;
    
    cout << "[3] Caminho mínimo entre dois vértices usando algoritmo de Djkstra" << endl << "Parâmetro: dois Ids de vértices" << endl << endl;
    
    cout << "[4] Caminho mínimo entre estes dois vértices usando algoritmo de Floyd" << endl << "Parâmetro: dois IDs de vértices do grafo"  << endl << endl;
    
    cout << "[5] Árvore Geradora Mínima sobre o subgrafo vértice-induzido por X usando o algoritmo de Prim" << endl << "Parâmetro: um subconjunto X de vértices do grafo" << endl << endl;
    
    cout << "[6] Árvore Geradora Mínima sobre o subgrafo vértice-induzido por X usando o algoritmo de Kruskal" << endl << "Parâmetro: um subconjunto X de vértices do grafo" << endl << endl;
    
    cout << "[7] Árvore dada pela ordem de caminhamento em profundidade a partir de nó dado em parâmetro, destacando as arestas de retorno" << endl << "Parâmetro: um ID de vértice" << endl << endl;
    
    cout << "[8] Ordenação topológica em D ou a informação de que D não é um grafo acíclico direcionado" << endl << "Parâmetro: o próprio grafo acíclico direcionado D" << endl << endl;
    
    cout << "[0] SAIR" << endl;

    return 0;
}