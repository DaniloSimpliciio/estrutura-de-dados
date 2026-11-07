#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

/*int main(){
	unordered_map<string,int>tabela;
	
	tabela["um"] = 1;
	tabela["dois"] =2;
	tabela ["três"]=3;
	
	cout <<"valor: "<<tabela["um"]<<endl;
	cout <<"valor: "<<tabela["dois"]<<endl;
	cout <<"valor: "<<tabela["três"]<<endl;
	return 0;
	
	
	}*/

int main() {
    unordered_map<string, int> tabela;

    tabela["um"] = 1;
    tabela["dois"] = 2;
    tabela["três"] = 3;

    for (auto& par: tabela) {
        cout << par.second << " ";
    }

    return 0;
}
