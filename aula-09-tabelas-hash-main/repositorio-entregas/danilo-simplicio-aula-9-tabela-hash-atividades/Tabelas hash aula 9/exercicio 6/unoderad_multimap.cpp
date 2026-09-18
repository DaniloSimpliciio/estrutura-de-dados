#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

    // 1. Criando a tabela
    unordered_multimap<string, double> notas;

    // 2. Inserindo varias notas para o mesmo aluno
    notas.insert({"Joao", 7.0});
    notas.insert({"Joao", 8.5});
    notas.insert({"Joao", 9.0});

    // Notas de outros alunos
    notas.insert({"Maria", 8.0});
    notas.insert({"Pedro", 6.5});

    // 3. Quantas notas Joao possui?
    cout << "Joao possui "
         << notas.count("Joao")
         << " notas." << endl;

    // 4. Listando todas as notas de Joao
    cout << "\nNotas de Joao:" << endl;

    auto intervalo = notas.equal_range("Joao");

    for (auto it = intervalo.first; it != intervalo.second; ++it) {
        cout << it->second << endl;
    }

    // 5. Removendo todas as notas de Joao
    notas.erase("Joao");

    cout << "\nTamanho da tabela depois de remover Joao: "
         << notas.size() << endl;

    return 0;
}
