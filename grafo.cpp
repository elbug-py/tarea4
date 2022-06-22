#include"grafo.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Grafo::Grafo(){
    vector<vector<int>> grap;
    this->graph = grap;
}

Grafo::Grafo(int v){
    //vector<vector<int>> grap;
    //this->graph = grap;

    for (int i = 0; i < v+1; i++)
    {
        vector<int> v1;
        graph.push_back(v1);

    }
    
}

int Grafo::add_nodo(){
    vector<int> nod;
    graph.push_back(nod);
    return graph.size()-1;
}

void Grafo::add_arco(int d, int h){
    if (d<(int)graph.size() && h<(int)graph.size()){
        graph[d].push_back(h);
        graph[h].push_back(d);
    }
    else{
        cout<<"FUERA DE RANGO"<<endl;
    }
    
}

bool Grafo::hay_arco(int d, int h){
    if (d<(int)graph.size() && h<(int)graph.size()){
        for (int i = 0; i < (int) graph[d].size(); i++)
        {
            if (graph[d][i] == h) return true;
        }
        
    }
    return false;
}

bool Grafo::hay_camino(int d, int h){
    if (d<(int)graph.size() && h<(int)graph.size()){

        if (hay_arco(d, h) == true) return true;

        for (int i = 0; i < (int) graph[d].size(); i++)
        {
            if (hay_arco((graph[d][i]), h) == true) return true;
        }
        
    }
    return false;
}


/* para encontrar el camino se puede 
aplicar recursivamente hay_arco() con la condicion
de que el vector no tenga size() = 0 y así sucesivamente 
hasta llegar al destino, si se llega a un nodo con size()=0
no hay camino*/