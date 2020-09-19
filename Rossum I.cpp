/*	
	Rossum I
	Esse programa tem o intuito de ajudar nas mais diversas utilidades, ainda a serem definidas.
	Bugs:
	Linha 60 - Leitura de string: O progama não lê quando é digitado o "ç" ;
*/
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.c>
#include <string.h>
#define txtnormal textcolor(7);		//Definem a Paleta de cores
#define vermelho textcolor(12);
#define amarelo textcolor(6);
#define azulesc textcolor(1);
#define azulcla textcolor(9);
#define verdeclaro textcolor(3);
#define verde textcolor(2);			//Definem a Paleta de cores
using namespace std;
void calculo();			//Função voltada para os cálculos e conta da matéria
void teoria();			//Função voltada para a parte teórica da matéria
void exemplos();		//Função - mostra os exemplos de determinado tópico
void desenhanormal(int,int,int,int,char,char);		//Função - desenha o exemplo prático da força elástica
void limpatela();		//Função - limpa a HUD
main(){
	setlocale(LC_ALL,"Portuguese");
	char escolha[8],scalculo[21],steoria[18],sair[5];
	//printf("\t-Bem vindo ao home da Rossum I.");
	cout << "\t-Bem vindo ao home da ";		amarelo		//cout << "Rossum I.";	txtnormal
	cout << "R";	azulesc		cout << "o";	amarelo		cout << "s";	azulesc		cout << "s";		amarelo		cout << "u";	azulesc		cout << "m ";	vermelho	cout << "I";	txtnormal
	printf("\nMatéria: "); 	amarelo		printf("Física - Dinâmica de Newton");	txtnormal
	do{
		printf("\n Menu de opções: \n");
		printf("· Calculo\n");
		printf("· Teoria\n");
		printf(" -Em que posso ser útil? ");
		gets(escolha);	strlwr(escolha);
		if (strstr("calculocálculocalclo",escolha) != 0){
			calculo();				//Chama a função para cálculo
			txtnormal
		}
		else if (strstr("teoriatoriatrpria",escolha) != 0){
			teoria();				//Chama a função de teorias
			txtnormal
		}
		printf("\n  Deseja sair? ");		gets(sair);		strlwr(sair);
		if(strstr("ssimsairclaropa",sair)==0){
			clrscr();
			verde	printf("\n\tTerminal limpado.\n");	txtnormal
		}
	}while(strstr("ssimsairclaropa",sair)==0);
	printf("\n\tDesligando a interface da Rossum I...\n\n");	Sleep(2500);	system("pause");
}

/*void limpatela(){			Função que limpa a HUD
	textbackground(7);		txtnormal
	clrscr();
	textbackground(0);
}*/

void calculo(){
	textcolor(11);
	printf("\n\tAcessando o menu de calculos.\n");	Sleep(2000);	txtnormal
	printf("\n- Cálculos Disponíveis: \n");
	verde	printf("   · Peso\n");		txtnormal
	printf("\t- Fórmula: 	"); 	vermelho	printf("P");	txtnormal	printf(" = "); 	amarelo		printf("m "); 	txtnormal	printf("·");	azulesc		printf(" g	\n");	
	vermelho	printf("\t\t  Peso[N]");	amarelo		printf("  Massa[kg]");	azulesc		printf("  gravidade[m/s^2];\n");	txtnormal
	verde	printf("\n   · Normal\n");		txtnormal
	printf("\t- Calculada de acordo com outras forças; \n");
	//desenhanormal(10,5,20,10,'-','|')	;	//função com gotoxy para desenhar superfícies, mostrando a aplicação da força
	verde	printf("\n   · Força Elástica\n");		txtnormal
	printf("\t- Fórmula: 	"); 	verdeclaro	printf("Fel");	txtnormal	printf(" = "); 		azulesc		printf("k "); 	txtnormal	printf("·");	vermelho /*trocar por verde claro*/		printf(" x	\n");
	//desenhaelastica()		// função com gotoxy para desenhar molas, aplicação da força elástica
	verde	printf("\n   · Tração\n");		txtnormal
	
	/*
	printf("· \n");
	printf("· \n");
	printf("· \n");*/
	printf("Retornando ao menu principal...");
	txtnormal
}

void teoria(){
	//void exemplos();
	char escolha[8];
	textcolor(11);
	printf("\n\tAcessando o menu de teorias.\n");		Sleep(1400);	txtnormal
	printf("\nCategorias: \n");
	printf("· Força\n");	printf("· Vetor\n");	printf("· Exemplos de Força\n");
	/*textcolor();*/	printf("Para qual categoria você deseja ir? ");		gets(escolha);		strlwr(escolha);
	if (strstr("forcaforçafrocafroça",escolha)!=0){
		printf("\n\tCategoria de Força. \n");
		printf("- Conceito: Grandeza física VETORIAL, que pode variar a velocidade de corpos e deformá-los;\n");
		printf("- Não é visível, apenas suas ações; \n");
		printf("- Medida em ");		textcolor(11);	printf("Newtons [N]\n");	txtnormal
	}
	else if (strstr("vetorvetrocetorvwtorvwtprveortveotr",escolha)!=0){
		printf("\n\tCategoria de vetores. \n");
		printf("- Um vetor é um seguimento de reta orientado(uma setinha,traço).\n");
		printf("- Sempre apresenta 3 aspectos: \n");
		printf("   Módulo: Valor numérico (Intensidade) do vetor + Unidade de medida da intensidade ;\n");
		printf("   Direção: Horizontal/Vertical/Diagonal;\n");
		printf("   Sentido: Norte, Sul, Leste, Oeste, Direita, Esquerda, Cima, Baixo, ...\n");
	}
	else if (strstr("exemplosexmplosexesmplos",escolha)!=0){
		exemplos();
	}
	/*else if (strstr("forcaresultante",escolha)!=0){
		resultante();		// função para mostrar força resultante
	}*/
}
void exemplos(){
	printf("Categoria de exemplos de força.\n");
	verde	printf("   · Peso\n");		txtnormal
	printf("\t- Força que atrai os corpos para o centro do astro (corpo mais massivo);\n");
	printf("\t- Fórmula: 	"); 	vermelho	printf("P");	txtnormal	printf(" = "); 	amarelo		printf("m"); 	txtnormal	printf("·");	azulesc		printf(" g	\n");	
	vermelho	printf("\t\t  Peso[N]");	amarelo		printf("  Massa[kg]");	azulesc		printf("  gravidade[m/s^2];\n");	txtnormal
	verde	printf("\n   · Normal\n");		txtnormal
	printf("\t- Força que uma superfície aplica sobre um objeto; \n");
	printf("\t- É perpendicular à superfície; \n");
	printf("\t- Calculada de acordo com outras forças; \n");
	//desenhanormal(10,5,20,10,'-','|')	;	//função com gotoxy para desenhar superfícies, mostrando a aplicação da força
	verde	printf("\n   · Força Elástica\n");		txtnormal
	printf("\t- Força presente em corpos que possuem elasticidade, como molas e elásticos; \n");
	printf("\t- Determina a deformação deste corpo, conforme ele se estica/comprime(a depender da direção da força); \n");
	//desenhaelastica()		// função com gotoxy para desenhar molas, aplicação da força elástica
	verde	printf("\n   · Tração\n");		txtnormal
	printf("\t- Força existente em;\n");
	printf("\t- Topico item 4;\n");
}

void desenhanormal(int ci, int li, int cf, int lf, char car, char cra){
	for (int c=ci; c<=cf; c++){
		gotoxy(c,li);	printf("%c", car);		//cout << car;
		gotoxy(c,lf);	printf("%c", car);		//cout << car;
	}
	for (int l=li; l<=lf; l++){
		gotoxy(ci,l);printf("%c", cra);
		gotoxy(cf,l);printf("%c", cra);
	}
}
