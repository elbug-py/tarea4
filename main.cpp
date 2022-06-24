#include"grafo.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    Grafo g1 = Grafo(3);

    g1.add_arco(1,3);
    g1.add_nodo();
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
    cout<<g1.hay_camino(1,2)<<endl;
    cout<<g1.hay_camino(1,5)<<endl;
    cout<<g1.hay_camino(1,6)<<endl;
    

    return 0;
}