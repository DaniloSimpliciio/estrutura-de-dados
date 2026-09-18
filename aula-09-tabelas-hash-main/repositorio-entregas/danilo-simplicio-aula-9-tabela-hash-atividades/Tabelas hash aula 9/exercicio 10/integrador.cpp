#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {

    // 1. Alunos e suas notas finais
    unordered_map<string, double> alunos;

    alunos["Carlos"] = 8.5;
    alunos["Ana"] = 9.0;
    alunos["Bruno"] = 6.5;
    alunos["Daniel"] = 7.5;
    alunos["Maria"] = 10.0;


    // 2. Alunos que entregaram o trabalho
    unordered_set<string> entregaram;

    entregaram.insert("Carlos");
    entregaram.insert("Ana");
    entregaram.insert("Maria");


    // 3. Disciplinas de cada aluno
    unordered_multimap<string, string> disciplinas;

    disciplinas.insert({"Carlos", "Programacao"});
    disciplinas.insert({"Carlos", "Banco de Dados"});
    disciplinas.insert({"Carlos", "Estrutura de Dados"});

    disciplinas.insert({"Ana", "Programacao"});
    disciplinas.insert({"Ana", "Banco de Dados"});

    disciplinas.insert({"Bruno", "Estrutura de Dados"});
    disciplinas.insert({"Bruno", "Engenharia de Software"});

    disciplinas.insert({"Daniel", "Programacao"});
    disciplinas.insert({"Daniel", "Banco de Dados"});
    disciplinas.insert({"Daniel", "Engenharia de Software"});

    disciplinas.insert({"Maria", "Programacao"});
    disciplinas.insert({"Maria", "Banco de Dados"});
    disciplinas.insert({"Maria", "Estrutura de Dados"});


    // 4. Percorrendo os alunos
    for (auto& aluno : alunos) {

        string nome = aluno.first;
        double nota = aluno.second;

        cout << "\n~~~~~~~~~~~~~" << endl;
        cout << "Aluno: " << nome << endl;
        cout << "Nota: " << nota << endl;

        // Verificando se entregou
        if (entregaram.count(nome) > 0) {
            cout << "Trabalho: Entregou" << endl;
        } else {
            cout << "Trabalho: Nao entregou" << endl;
        }

        // Procurando as disciplinas do aluno
        auto intervalo = disciplinas.equal_range(nome);

        cout << "Disciplinas:" << endl;

        for (auto it = intervalo.first;
             it != intervalo.second;
             ++it) {

            cout << "- " << it->second << endl;
        }
    }


    // 5. Escolha das estruturas:
    //
    // unordered_map:
    // Foi escolhido para relacionar cada aluno com sua nota.
    // Cada aluno possui uma chave unica e queremos acesso rapido.
    //
    // unordered_set:
    // Foi escolhido para armazenar os alunos que entregaram.
    // Nao precisamos repetir o nome de um aluno.
    //
    // unordered_multimap:
    // Foi escolhido porque um mesmo aluno pode possuir
    // varias disciplinas.
    //
    // Portanto:
    // unordered_map  -> aluno + nota
    // unordered_set  -> alunos que entregaram
    // unordered_multimap -> aluno + varias disciplinas


    return 0;
}
