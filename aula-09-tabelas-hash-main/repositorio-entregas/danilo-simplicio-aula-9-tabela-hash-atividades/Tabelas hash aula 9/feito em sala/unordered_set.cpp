#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	unordered_set<int>meuSet = {3,1,4,1,5,9};
	meuSet.insert(2);
	meuSet.insert (2);
	meuSet.erase(1);
	for(int valores: meuSet)
	cout<<valores<<" ";
	
	return 0;
	}

