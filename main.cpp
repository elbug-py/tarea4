#include"grafo.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v2.push_back(1);
    v1.push_back(2);
    v2.push_back(1);

    if (v1==v2){
        cout << "anashei" << endl;
    }

    Grafo g1 = Grafo(3);

    g1.add_arco(1,3);
    g1.add_nodo();
    g1.add_nodo();
    g1.add_arco(3,2);
    g1.add_arco(3,4);
    g1.add_arco(2,4);
    g1.add_arco(4,5);
    /*int a = g1.add_nodo();
    int b = g1.add_nodo();

    cout<<a<<endl;
    cout<<b<<endl;*/


    cout<<"El tamaño del grafo es: "<<g1.graph.size()<<endl;

    cout<<g1.hay_arco(1,3)<<endl;
    cout<<g1.hay_camino(1,4)<<endl;
    
    for (int i = 0; i < (int) g1.graph.size(); i++)
    {
        for (int j = 0; j < (int) g1.graph[i].size(); j++)
        {
            cout<<"Elemento "<<i<<","<<j<<" es: "<< g1.graph[i][j]<<endl;
        }
        
    }
    

    return 0;
}