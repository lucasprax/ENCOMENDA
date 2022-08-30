#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
	string linha[30];
	int cont = 0;
	int contl = 0;
	float entrada;
	int enter;
	ifstream arq1 ("extenso.txt");
	
	if(arq1.is_open()){
		// while (! arq1.eof() ) {
 	//  	 	cont++;
 	//  	}
		// linha = (string*)malloc(cont*(sizeof(string)));
		while (! arq1.eof() ) {
 	 	 	getline (arq1, linha[contl]);
 	 	 	cout << linha[contl] << endl;	
 	 	 	contl++;
 	 }
	}
	cout << "Insira o valor que você deseja ver em extenso" << endl;
	cin >> entrada;
	cout << endl;
	enter = int(entrada);
	if(entrada<20){
		cout << linha[enter-1];
	}
	if(entrada>20 && entrada < 100){
		cout << linha[enter-1];
		if(enter%10!=0){
			cout << "e " << linha[enter-enter]
		}
	}
	//FUNÇÕES DE JUNÇÃO
	
	}
