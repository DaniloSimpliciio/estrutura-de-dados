#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    // 1. Criando o set
    unordered_set<int> numeros = {10, 20, 30, 20, 10, 40};

    cout << "Tamanho inicial: " << numeros.size() << endl;

    // 2. Inserindo 50 e 20
    cout << "Tamanho antes: " << numeros.size() << endl;

    numeros.insert(50);
    numeros.insert(20);

    cout << "Tamanho depois: " << numeros.size() << endl;

    // 3. Verificando se o 30 existe
    if (numeros.count(30) > 0) {
        cout << "O valor 30 existe." << endl;
    } else {
        cout << "O valor 30 nao existe." << endl;
    }

    // 4. Removendo o 10
    numeros.erase(10);

    cout << "\nElementos restantes:" << endl;

    for (int numero : numeros) {
        cout << numero << endl;
    }

    // 5. Controle de acesso
    unordered_set<int> ingressosUsados;

    ingressosUsados.insert(101);
    ingressosUsados.insert(102);
    ingressosUsados.insert(103);

    int ingresso = 102;

    if (ingressosUsados.count(ingresso) > 0) {
        cout << "\nIngresso " << ingresso << " ja foi usado." << endl;
    } else {
        cout << "\nIngresso " << ingresso << " ainda nao foi usado." << endl;
        ingressosUsados.insert(ingresso);
    }

    return 0;
}
