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
int main() {
    vector<int> miVector;

    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);

    mostrarVector(miVector);

    cout << "Suma de los elementos: " << calcularSuma(miVector) << endl;

    cout << "Valor máximo en el vector: " << encontrarMaximo(miVector) << endl;

    return 0;
}