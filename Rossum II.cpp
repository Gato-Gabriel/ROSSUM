#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.c>
#include <conio.h>
#include <string.h>
#include <math.h>
#define preto textcolor(0);			//Definem a Paleta de cores
#define azulesc textcolor(1);		
#define verde textcolor(2);	
#define ciano textcolor(3);
#define vermelho textcolor(4);
#define violeta textcolor(5);	//Roxo mais forte
#define amarelo textcolor(6);
#define txtnormal ;textcolor(7);
#define cinza textcolor(8);
#define azulcla textcolor(9);	
#define verdeclaro textcolor(10);
#define cianoclaro textcolor(11);
#define vermelhoclaro textcolor(12);	
#define roxo textcolor(13);		//Roxo mais fraco
#define marrom textcolor(14);	//Bege-alike
#define branco textcolor(15);		//Definem a Paleta de cores
using namespace std;
void calculo();
main(){
	setlocale(LC_ALL,"Portuguese");
	/*char escolha[10];
	cout << "\n\t-Bem vindo ao home da ";		amarelo
	cout << "R";	azulesc		cout << "o";	amarelo		cout << "s";	azulesc		cout << "s";		amarelo		cout << "u";	azulesc		cout << "m ";	vermelho	cout << "II";	txtnormal
	printf("\nMatéria: "); 	amarelo		printf("blank");	txtnormal
	printf("\n Menu de opções: \n");
	printf("· Calculo\n");
	printf("· Teoria\n");
	printf(" -Em que posso ser útil? ");	gets(escolha);	strlwr(escolha);*/
	calculo();
	//if (strstr("calculocalclou")){	}
}
void calculo(){
	const float mol=6.022;
	char escolha[20];
	int nisotopos;
	float somapercent=0;	//Variável que checa se os valores da porcentagem estão próximos/iguais a 100.
	float massau,massamol,result,nmol,numol;
	float somachecagem=0;
	float porcent[4],massa[4];

	cianoclaro 	cout<<"  Tópicos:\n  · Média das Massas Atômicas(Mmat)\n  · Massa de um isótopo\n  · Porcentagem de um isótopo\n  · Massa de um mol\n  · Estudo dos gases\n";   txtnormal	 	cin>>escolha;	strlwr(escolha);
	if(strstr("mediatomicamematmmat",escolha)){
		//cout<<"Voce gostaria de usar a regra de Duolong-Petit(sim ou nao)?";	cin>>dulong;
		clrscr();
		float total=0,somachecagem=0;
		cianoclaro	cout<<"  · Media das Massas Atomicas";	txtnormal
		cout<<"\n*PS: Para casas decimais, utilize o ponto \".\" ao invés da vírgula";
		cout<<"\n - Quantos";	textcolor(CYAN+BLACK);   cout<<" isótopos";   txtnormal   cout<<" do elemento existem na natureza?";	cin>>nisotopos;
		checaporcentagem:
		for(int i=0;i<nisotopos;i++){
			printf(" Digite a porcentagem de abundancia do isotopo %d na natureza: ",i+1);    cin>>porcent[i];
		
		}
		for(int checa=0;checa<nisotopos;checa++)
			somachecagem+=porcent[checa];
		if (somachecagem<99 || somachecagem>101){
			cout<<"  As porcentagens não resultam em um número próximo de 100.\n";	goto checaporcentagem;
		}
		for(int j=0;j<nisotopos;j++){
			printf(" Digite a massa do isotopo %d (%.2f %%) na natureza: ",j+1,porcent[j]);    cin>>massa[j];
		}
		for(int k=0;k<nisotopos;k++){
			total+=(porcent[k] * massa[k]);
		}
		printf("A média das massas atômicas é de, aproximadamente, %.3f .",total/100.0);
	//}
	//for(int i=0;i<nisotopos;i++){		printf()	
	}
	else if(strstr("proporcaodemol",escolha)){
		int skol;
		//inicio:	USAR GOTO
		cout<<"Você deseja achar:\n 1 · A massa de um determinado numero de mols\n 2 · O numero de mols a partir de uma certa massa\n - Digite sua opcao: ";	cin>>skol;
		if(skol==1){
			cout<<"  Certo, informe a massa [em u] do mol da substancia:";		cin>>massau;
			cout<<"  Informe de quantos mols voce quer achar a massa: ";	cin>>nmol;
			result=(nmol*massau);
			printf("A massa é de %.3f * 10²³ u",result);
		}
		else if(skol==2){
			cout << "  Digite a massa por mol da substância: ";		cin>>massamol;
			
		}
	//	else {	goto(inicio); }
	}
	else if(strstr("estudo dos gases estudosgases",escolha)){
		
	}
	
	//É pq tipo
//	( 6,02 * (10)^23 ) * ( 1,66 * (10)^-24 ) = 
//	9,9932 * (10)^-1 = 0,99932
//	Multiplicar por 0,99932 é quase o mesmo que multiplicar por 1 (vai dar o mesmo número), por isso os números são parecidos
}
