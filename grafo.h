#include<vector>
#include <algorithm>
using namespace std;

class Grafo{        
    public:
        vector<int> nodos;
        vector<vector<int>> graph;
        vector<int> used;
    //Constructores.
        Grafo();
        Grafo(int v);

    //metodos
        int add_nodo();
        bool hay_arco(int d, int h);
        bool hay_camino(int d, int h);
        void add_arco(int d, int h);
};

