/*	
	Rossum I
	Esse programa tem o intuito de ajudar nas mais diversas utilidades, ainda a serem definidas.
	Bugs:
	Linha 60 - Leitura de string: O progama n�o l� quando � digitado o "�" ;
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
void calculo();			//Fun��o voltada para os c�lculos e conta da mat�ria
void teoria();			//Fun��o voltada para a parte te�rica da mat�ria
void exemplos();		//Fun��o - mostra os exemplos de determinado t�pico
void desenhanormal(int,int,int,int,char,char);		//Fun��o - desenha o exemplo pr�tico da for�a el�stica
void limpatela();		//Fun��o - limpa a HUD
main(){
	setlocale(LC_ALL,"Portuguese");
	char escolha[8],scalculo[21],steoria[18],sair[5];
	//printf("\t-Bem vindo ao home da Rossum I.");
	cout << "\t-Bem vindo ao home da ";		amarelo		//cout << "Rossum I.";	txtnormal
	cout << "R";	azulesc		cout << "o";	amarelo		cout << "s";	azulesc		cout << "s";		amarelo		cout << "u";	azulesc		cout << "m ";	vermelho	cout << "I";	txtnormal
	printf("\nMat�ria: "); 	amarelo		printf("F�sica - Din�mica de Newton");	txtnormal
	do{
		printf("\n Menu de op��es: \n");
		printf("� Calculo\n");
		printf("� Teoria\n");
		printf(" -Em que posso ser �til? ");
		gets(escolha);	strlwr(escolha);
		if (strstr("calculoc�lculocalclo",escolha) != 0){
			calculo();				//Chama a fun��o para c�lculo
			txtnormal
		}
		else if (strstr("teoriatoriatrpria",escolha) != 0){
			teoria();				//Chama a fun��o de teorias
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

/*void limpatela(){			Fun��o que limpa a HUD
	textbackground(7);		txtnormal
	clrscr();
	textbackground(0);
}*/

void calculo(){
	textcolor(11);
	printf("\n\tAcessando o menu de calculos.\n");	Sleep(2000);	txtnormal
	printf("\n- C�lculos Dispon�veis: \n");
	verde	printf("   � Peso\n");		txtnormal
	printf("\t- F�rmula: 	"); 	vermelho	printf("P");	txtnormal	printf(" = "); 	amarelo		printf("m "); 	txtnormal	printf("�");	azulesc		printf(" g	\n");	
	vermelho	printf("\t\t  Peso[N]");	amarelo		printf("  Massa[kg]");	azulesc		printf("  gravidade[m/s^2];\n");	txtnormal
	verde	printf("\n   � Normal\n");		txtnormal
	printf("\t- Calculada de acordo com outras for�as; \n");
	//desenhanormal(10,5,20,10,'-','|')	;	//fun��o com gotoxy para desenhar superf�cies, mostrando a aplica��o da for�a
	verde	printf("\n   � For�a El�stica\n");		txtnormal
	printf("\t- F�rmula: 	"); 	verdeclaro	printf("Fel");	txtnormal	printf(" = "); 		azulesc		printf("k "); 	txtnormal	printf("�");	vermelho /*trocar por verde claro*/		printf(" x	\n");
	//desenhaelastica()		// fun��o com gotoxy para desenhar molas, aplica��o da for�a el�stica
	verde	printf("\n   � Tra��o\n");		txtnormal
	
	/*
	printf("� \n");
	printf("� \n");
	printf("� \n");*/
	printf("Retornando ao menu principal...");
	txtnormal
}

void teoria(){
	//void exemplos();
	char escolha[8];
	textcolor(11);
	printf("\n\tAcessando o menu de teorias.\n");		Sleep(1400);	txtnormal
	printf("\nCategorias: \n");
	printf("� For�a\n");	printf("� Vetor\n");	printf("� Exemplos de For�a\n");
	/*textcolor();*/	printf("Para qual categoria voc� deseja ir? ");		gets(escolha);		strlwr(escolha);
	if (strstr("forcafor�afrocafro�a",escolha)!=0){
		printf("\n\tCategoria de For�a. \n");
		printf("- Conceito: Grandeza f�sica VETORIAL, que pode variar a velocidade de corpos e deform�-los;\n");
		printf("- N�o � vis�vel, apenas suas a��es; \n");
		printf("- Medida em ");		textcolor(11);	printf("Newtons [N]\n");	txtnormal
	}
	else if (strstr("vetorvetrocetorvwtorvwtprveortveotr",escolha)!=0){
		printf("\n\tCategoria de vetores. \n");
		printf("- Um vetor � um seguimento de reta orientado(uma setinha,tra�o).\n");
		printf("- Sempre apresenta 3 aspectos: \n");
		printf("   M�dulo: Valor num�rico (Intensidade) do vetor + Unidade de medida da intensidade ;\n");
		printf("   Dire��o: Horizontal/Vertical/Diagonal;\n");
		printf("   Sentido: Norte, Sul, Leste, Oeste, Direita, Esquerda, Cima, Baixo, ...\n");
	}
	else if (strstr("exemplosexmplosexesmplos",escolha)!=0){
		exemplos();
	}
	/*else if (strstr("forcaresultante",escolha)!=0){
		resultante();		// fun��o para mostrar for�a resultante
	}*/
}
void exemplos(){
	printf("Categoria de exemplos de for�a.\n");
	verde	printf("   � Peso\n");		txtnormal
	printf("\t- For�a que atrai os corpos para o centro do astro (corpo mais massivo);\n");
	printf("\t- F�rmula: 	"); 	vermelho	printf("P");	txtnormal	printf(" = "); 	amarelo		printf("m"); 	txtnormal	printf("�");	azulesc		printf(" g	\n");	
	vermelho	printf("\t\t  Peso[N]");	amarelo		printf("  Massa[kg]");	azulesc		printf("  gravidade[m/s^2];\n");	txtnormal
	verde	printf("\n   � Normal\n");		txtnormal
	printf("\t- For�a que uma superf�cie aplica sobre um objeto; \n");
	printf("\t- � perpendicular � superf�cie; \n");
	printf("\t- Calculada de acordo com outras for�as; \n");
	//desenhanormal(10,5,20,10,'-','|')	;	//fun��o com gotoxy para desenhar superf�cies, mostrando a aplica��o da for�a
	verde	printf("\n   � For�a El�stica\n");		txtnormal
	printf("\t- For�a presente em corpos que possuem elasticidade, como molas e el�sticos; \n");
	printf("\t- Determina a deforma��o deste corpo, conforme ele se estica/comprime(a depender da dire��o da for�a); \n");
	//desenhaelastica()		// fun��o com gotoxy para desenhar molas, aplica��o da for�a el�stica
	verde	printf("\n   � Tra��o\n");		txtnormal
	printf("\t- For�a existente em;\n");
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
