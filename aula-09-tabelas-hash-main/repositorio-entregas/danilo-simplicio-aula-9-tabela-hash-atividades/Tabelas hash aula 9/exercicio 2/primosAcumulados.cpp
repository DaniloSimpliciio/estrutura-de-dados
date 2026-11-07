#include <iostream>
#include <string>
#include "primos.h"
using namespace std;

int hashAcumulado(string texto) {
    int resultado = 1;

    for (int i = 0; i < (int)texto.size(); i++) {
        resultado = resultado * primo(texto[i]);
    }

    return resultado % 10;
}

int main() {
    string tamanhos[4] = {"A", "AA", "AAA", "AAAA"};

    for (string tamanho : tamanhos) {
        cout << tamanho << " " << hashAcumulado(tamanho) << endl;
    }

    // Não houve colisões: cada tamanho recebeu um índice diferente.

    return 0;
}
