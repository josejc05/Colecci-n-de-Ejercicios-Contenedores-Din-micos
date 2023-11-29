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
int main() {
    list<double> miLista = {1.1, 2.2, 3.3, 4.4};

    stack<double, list<double>> miPila(miLista);

    cout << "Operaciones en la lista y la pila:" << endl;

    mostrarLista(miLista);

    miPila.push(5.5);
    cout << "Después de push(5.5), top: " << miPila.top() << endl;

    mostrarLista(miLista);

    miPila.pop();
    cout << "Después de pop(), top: " << miPila.top() << endl;

    mostrarLista(miLista);
    miPila.push(6.6);
    cout << "Después de push(6.6), top: " << miPila.top() << endl;

    mostrarLista(miLista);

    mostrarPila(miPila);

    return 0;
}