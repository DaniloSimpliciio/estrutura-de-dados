#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

    // 1. Criando a tabela
    unordered_map<string, string> tabela;

    tabela["Brasil"] = "Brasilia";
    tabela["Franca"] = "Paris";
    tabela["Japao"] = "Toquio";
    tabela["Italia"] = "Roma";
    tabela["Argentina"] = "Buenos Aires";

    // 2. Procurando um pais com find()
    auto resultado = tabela.find("Brasil");

    if (resultado != tabela.end()) {
        cout << "Capital do Brasil: " << resultado->second << endl;
    }

    // 3. Removendo a Italia
    tabela.erase("Italia");

    // Confirmando com count()
    if (tabela.count("Italia") == 0) {
        cout << "Italia foi removida." << endl;
    }

    // 4. Exibindo os pares restantes
    cout << "\nPaises restantes:\n";

    for (auto& p : tabela) {
        cout << p.first << " - " << p.second << endl;
    }

    // 5. Inserindo o mesmo pais novamente
    tabela["Brasil"] = "Rio de janeiro";

    cout << "\nCapital do Brasil depois da alteracao: "
         << tabela["Brasil"] << endl;

    // Ao usar [] com uma chave que ja existe,
    // o valor antigo e substituido pelo novo.

    return 0;
}
