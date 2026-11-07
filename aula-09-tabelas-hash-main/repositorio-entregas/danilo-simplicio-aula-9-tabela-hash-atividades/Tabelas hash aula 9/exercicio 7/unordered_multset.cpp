#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    // 1. Criando o unordered_multiset
    unordered_multiset<int> notas = {
        7, 8, 7, 9, 6,
        8, 7, 10, 6, 9
    };

    // 2. Quantos alunos tiraram 7?
    cout << "Alunos que tiraram 7: "
         << notas.count(7) << endl;

    // 3. Inserindo mais duas notas
    notas.insert(5);
    notas.insert(8);

    cout << "Tamanho total: "
         << notas.size() << endl;

    // 4. Removendo todas as notas 6
    notas.erase(6);

    cout << "Quantidade de notas 6 depois do erase: "
         << notas.count(6) << endl;

    // 5. Exibindo as notas restantes
    cout << "\nNotas restantes:" << endl;

    for (int nota : notas) {
        cout << nota << " ";
    }

    cout << endl;

    return 0;
}
