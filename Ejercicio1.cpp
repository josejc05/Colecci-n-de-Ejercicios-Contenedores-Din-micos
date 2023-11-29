#include <iostream>
#include <vector>

using namespace std;

void mostrarVector(const vector<int>& v) {
    cout << "Elementos del vector: ";
    for (const int& elemento : v) {
        cout << elemento << " ";
    }
    cout << endl;
}
int calcularSuma(const vector<int>& v) {
    int suma = 0;
    for (const int& elemento : v) {
        suma += elemento;
    }
    return suma;
}

int encontrarMaximo(const vector<int>& v) {
    int maximo = v[0];
    for (const int& elemento : v) {
        if (elemento > maximo) {
            maximo = elemento;
        }
    }
    return maximo;
}