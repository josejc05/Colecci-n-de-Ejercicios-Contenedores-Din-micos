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