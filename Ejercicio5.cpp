#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main() {
    auto cuadrado = [](int num) { return num * num; };

    cout << "Cuadrado de 5: " << cuadrado(5) << endl;

    vector<int> numeros = {1, 2, 3, 4, 5};
    for_each(numeros.begin(), numeros.end(), [](int num) {
        cout << num << " ";
    });
