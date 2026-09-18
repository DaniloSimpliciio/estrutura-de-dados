#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main() {

    // 1. Criando um set com 5 cidades
    set<string> cidades = {
        "Sao Paulo",
        "Campos do Jordao",
        "Rio de Janeiro",
        "Curitiba",
        "Belo Horizonte"
    };

    // 2. Exibindo as cidades
    cout << "SET:" << endl;

    for (string cidade : cidades) {
        cout << cidade << endl;
    }

    // 3. Tentando inserir uma cidade que ja existe
    cout << "\nTamanho antes: "
         << cidades.size() << endl;

    cidades.insert("Curitiba");

    cout << "Tamanho depois: "
         << cidades.size() << endl;

    // 4. Verificando se uma cidade existe
    auto resultado = cidades.find("Sao Paulo");

    if (resultado != cidades.end()) {
        cout << "\nSao Paulo esta no conjunto." << endl;
    } else {
        cout << "\nSao Paulo nao esta no conjunto." << endl;
    }

    // 5. Comparando com unordered_set
    unordered_set<string> cidadesDesordenadas = {
        "Sao Paulo",
        "Campos do Jordao",
        "Rio de Janeiro",
        "Curitiba",
        "Belo Horizonte"
    };

    cout << "\nUNORDERED_SET:" << endl;

    for (string cidade : cidadesDesordenadas) {
        cout << cidade << endl;
    }

    // Diferenca:
    // set ordena os elementos automaticamente.
    // unordered_set nao garante nenhuma ordem.

    return 0;
}
