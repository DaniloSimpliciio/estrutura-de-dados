#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    // 1. Criando um map com 5 alunos
    map<string, double> alunos;

    alunos["Carlos"] = 7.5;
    alunos["Ana"] = 9.0;
    alunos["Bruno"] = 6.5;
    alunos["Daniel"] = 8.0;
    alunos["Maria"] = 10.0;

    // 2. Exibindo o map
    cout << "MAP:" << endl;

    for (auto& aluno : alunos) {
        cout << aluno.first << " - "
             << aluno.second << endl;
    }

    // 3. Criando um unordered_map
    unordered_map<string, double> alunosDesordenados;

    alunosDesordenados["Carlos"] = 7.5;
    alunosDesordenados["Ana"] = 9.0;
    alunosDesordenados["Bruno"] = 6.5;
    alunosDesordenados["Daniel"] = 8.0;
    alunosDesordenados["Maria"] = 10.0;

    // Exibindo o unordered_map
    cout << "\nUNORDERED_MAP:" << endl;

    for (auto& aluno : alunosDesordenados) {
        cout << aluno.first << " - "
             << aluno.second << endl;
    }

    // 4. Diferenca:
    // map ordena as chaves automaticamente.
    // unordered_map nao garante nenhuma ordem.

    // 5. Vale a pena usar map quando a ordem das chaves
    // for importante, mesmo aceitando O(log n).

    return 0;
}
