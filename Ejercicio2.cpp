#include <iostream>
#include <list>
#include <stack>

using namespace std;

void mostrarLista(const list<double>& l) {
    cout << "Elementos de la lista: ";
    for (const double& elemento : l) {
        cout << elemento << " ";
    }
    cout << endl;
}

void mostrarPila(stack<double, list<double>>& pila) {
    cout << "Elementos de la pila: ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;
}
