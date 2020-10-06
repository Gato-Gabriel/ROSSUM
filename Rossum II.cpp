#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.c>
#include <string.h>
#define preto textcolor(0);			//Definem a Paleta de cores
#define azulesc textcolor(1);		
#define verde textcolor(2);	
#define ciano textcolor(3);
#define vermelho textcolor(4);
#define roxo textcolor(5);
#define amarelo textcolor(6);
#define txtnormal ;textcolor(7);
#define cinza textcolor(8);
#define azulcla textcolor(9);	
#define verdeclaro textcolor(10);
#define cianoclaro textcolor(11);
#define vermelhoclaro textcolor(12);	
#define branco textcolor(15);		//Definem a Paleta de cores
using namespace std;
void massatomica();
main(){
	setlocale(LC_ALL,"Portuguese");
	char escolha[10];
	cout << "\n\t-Bem vindo ao home da ";		amarelo
	cout << "R";	azulesc		cout << "o";	amarelo		cout << "s";	azulesc		cout << "s";		amarelo		cout << "u";	azulesc		cout << "m ";	vermelho	cout << "II";	txtnormal
	printf("\nMatéria: "); 	amarelo		printf("blank");	txtnormal
	printf("\n Menu de opções: \n");
	printf("· Calculo\n");
	printf("· Teoria\n");
	printf(" -Em que posso ser útil? ");	gets(escolha);	strlwr(escolha);
	massatomica();
	//if (strstr("calculocalclou")){	}
}
void massatomica(){
	char escolha[20];
	int nisotopos;
	float porcent[4],massa[4];
	cout<<"- Voce deseja achar a Media de Massa Atomica, a massa de um dos isotopos,\n ou a porcentagem de um dos isotopos?";	cin>>escolha;	strlwr(escolha);
	if(strstr("mediatomicamematmmat",escolha)){
		//cout<<"Voce gostaria de usar a regra de Duolong-Petit(sim ou nao)?";	cin>>dulong;
		clrscr();
		float total;
		cianoclaro	cout<<"  · Media das Massas Atomicas";	txtnormal
		cout<<"\n - Quantos isótopos do elemento existem na natureza?";	cin>>nisotopos;
		for(int i=0;i<nisotopos;i++){
			printf(" Digite a porcentagem de abundancia do isotopo %d na natureza: ",i+1);    cin>>porcent[i];
		}
		for(int j=0;j<nisotopos;j++){
			printf(" Digite a massa do isotopo %d (%.2f %%) na natureza: ",j+1,porcent[j]);    cin>>porcent[j];
		}
		
	}
	//for(int i=0;i<nisotopos;i++){		printf()	}
}
