/*	
	Rossum I
	Esse programa tem o intuito de ajudar nas mais diversas utilidades, ainda a serem definidas.
	Bugs:
	Linha 60 - Leitura de string: O progama não lê quando é digitado o "ç" ;
     0 = Black
     1 = Blue
     2 = Green
     3 = Cyan
     4 = Red
     5 = Magenta
     6 = Yellow
     7 = LightGray
     8 = DarkGray
     9 = LightBlue
     10 = LightGreen
     11 = LightCyan
     12 = LightRed
     13 = LightMagenta
     14 = LightYellow
     15 = White
*/
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
void calculo();			//Função voltada para os cálculos e conta da matéria
void teoria();			//Função voltada para a parte teórica da matéria
void exemplos();		//Função - mostra os exemplos de forca
void resultante();      //Função - mostra Froca Resultante
void desenhanormal(int,int,int,int,char,char);		//Função - desenha o exemplo prático da força elástica
void limpatela();		//Função - limpa a HUD
main(){
	setlocale(LC_ALL,"Portuguese");
	char escolha[8],scalculo[21],steoria[18],sair[5];
	txtnormal/*
	cout<<"Olá pessoal, aqui é o Gato.\nFiz este programa com o intuito de ajudar vocês nesta matéria de Física.\n Não é lá tão prático, mas espero que possa ser útil de alguma maneira.";
	cout<<"\nHá alguns erros aqui e ali, claro. O (clear screen) funciona apenas em uma\ncerta porção da tela, e o \"ç\" não é lido quando digitado pelo usuário.\nTodavia, estou trabalhando para com que estes e mais outros possam ser \nresolvidos nas futuras versões, ok?\n Com isso fora do caminho, vamos ao que interessa!\n\n";
	Sleep(3000);		system("pause");	clrscr();*/
	cout << "\n\t-Bem vindo ao home da ";		amarelo
	cout << "R";	azulesc		cout << "o";	amarelo		cout << "s";	azulesc		cout << "s";		amarelo		cout << "u";	azulesc		cout << "m ";	vermelho	cout << "I";	txtnormal
	printf("\nMatéria: "); 	amarelo		printf("Física - Dinâmica de Newton");	txtnormal
	do{
		printf("\n Menu de opções: \n");
		printf("· Calculo\n");
		printf("· Teoria\n");
		printf(" -Em que posso ser útil? ");	gets(escolha);	strlwr(escolha);
		if (strstr("calculocálculocalclo",escolha)){
			calculo();				//Chama a função para cálculo
			txtnormal
		}
		else if (strstr("teoriatoriatrpria",escolha)){
			teoria();				//Chama a função de teorias
			txtnormal
		}
		vermelho	printf("\n\n  Deseja encerrar a Rossum I? ");		txtnormal	gets(sair);		strlwr(sair);
		if(strstr("ssimsairclaropa",sair)==0){
			clrscr();
			verde	printf("\n\tTerminal limpado.\n");	txtnormal
		}
	}while(strstr("ssimsairclaropa",sair)==0);
	printf("\n\n\tDesligando a interface da Rossum I...\n\n\n");	Sleep(2500);	system("pause");
}

/*void limpatela(){			Função que limpa a HUD
	textbackground(7);		txtnormal
	clrscr();
	textbackground(0);
}*/

void calculo(){
	char escolha[7],sair[4];
	textcolor(11);
	printf("\n\tAcessando o menu de calculos.\n");	Sleep(2000);	txtnormal  clrscr();
	do{
		printf("\n- Cálculos Disponíveis: \n");		verde
		printf("   · Peso\n   · Normal\n");
		//desenhanormal(10,5,20,10,'-','|')	;	//função com gotoxy para desenhar superfícies, mostrando a aplicação da força
		printf("   · Força Elástica\n");
		//desenhaelastica()		// função com gotoxy para desenhar molas, aplicação da força elástica
		printf("   · Tração\n\n");		txtnormal
		cout << "  Qual sua opção? ";		gets(escolha);		strlwr(escolha);
		if (strstr("pesopeosposepseo",escolha)){
			float peso,massa,grav;
			cianoclaro	printf("   · Peso\n");		txtnormal
			do{
			printf("\t- Fórmula: 	"); 	vermelhoclaro	printf("P");	txtnormal	printf(" = "); 	amarelo		printf("m "); 	txtnormal	printf("·");	azulesc		printf(" g	\n");	
			vermelhoclaro	printf("\t\t  Peso[N]");	amarelo		printf("  Massa[kg]");	azulesc		printf("  gravidade[m/s²];\n");	txtnormal
			printf("\n -Digite o Peso do corpo [em Newtons](0 se quiser descobrir): ");	scanf("%f",&peso);
			printf(" -Digite a massa do corpo [em kg](0 se quiser descobrir): ");	scanf("%f",&massa);
			printf(" -Digite a gravidade do astro [em m/s²] (0 se quiser descobrir): ");	scanf("%f",&grav);
			amarelo		printf(" Resposta: ");		txtnormal
			if (peso==0){
				peso=massa*grav;
				cout << "O ";	vermelhoclaro	cout<<"Peso";	txtnormal	cout<<" do corpo é de ";	vermelhoclaro	printf("%.2f N .",peso);	break;
			}
			else if (massa==0){
				massa=peso/grav;
				printf("A");	amarelo  cout<<" massa ";  txtnormal  cout<<"do corpo é de ";  amarelo   printf(" %.2f kg.",massa);		break;
			}
			else if (grav==0){
				grav=peso/massa;
				printf("A");	azulesc   cout<<" gravidade ";  txtnormal  cout<<"do astro é de ";  azulesc   printf(" %.2f m/s².",grav);   break;
			}
			else{
				vermelho  cout << "  Impossível calcular.";  txtnormal cout<<" Redigite, por gentileza.\n";
			}
			txtnormal
		}while(true);
		}
		else if (strstr("normalnromalnlmarolnmoral",escolha)){
			//funcao da forca normal aqui				//Chama a função de teorias
			verde	printf("\n   · Normal\n");	txtnormal
			printf("\t- A força Normal é calculada de acordo com outras forças; \n\t- Portanto, não há cálculos DIRETOS disponíveis.");
		}
		else if (strstr("forca elasticafelsaticaselaticafroca",escolha)){
			//funcao da forca elastica aqui				//Chama a função de teorias
			float fel,konst,defor;
			cianoclaro	printf("\n   · Força Elástica\n");		txtnormal
			do{
			printf("\t- Fórmula: 	"); 	verdeclaro	printf("Fel");	txtnormal	printf(" = "); 		azulesc		printf("k "); 	txtnormal	printf("·");	amarelo		printf(" x	\n");	txtnormal
			printf("\n -Digite a ");  verdeclaro  cout<<"Força Elástica ";  txtnormal   cout<<"exercida [em Newtons](0 se quiser descobrir): ";	scanf("%f",&fel);
			printf(" -Digite a");  azulesc cout<<" constante elástica ";  txtnormal   cout<<"do corpo (0 se quiser descobrir): "; 	scanf("%f",&konst);
			printf(" -Digite a");  amarelo  cout<<" deformação ";  txtnormal  cout<<"do corpo [em m] (0 se quiser descobrir): ";	scanf("%f",&defor);
			amarelo		printf("\n Resposta: ");		txtnormal
			if (fel==0){
				fel=konst*defor;
				cout << "A ";	verdeclaro  cout<<"Força Elástica";	 txtnormal	cout<<" exercida é de ";	verdeclaro	printf("%.2f N .",fel);  break;
			}
			else if (konst==0){
				konst=fel/defor;
				printf("A");	azulesc		cout<<" constante elástica ";  txtnormal  cout<<"do corpo é";  azulesc  printf(" %.2f .",konst);   break;
			}
			else if (defor==0){
				defor=fel/konst;
				printf("A");   amarelo   cout<<" deformação ";  txtnormal  cout<<"sofrida pelo corpo é de ";  amarelo  printf(" %.2f .",defor);		break;
			}
			else{
				vermelho  cout << "  Impossível calcular.";  txtnormal cout<<" Redigite, por gentileza.\n";
			}
			txtnormal
		    }while(true);
		}
		else if (strstr("tracaotracoatrsacaotroacatroca",escolha)){
			//funcao da tracao aqui				//Chama a função de teorias
			verde	printf("\n   · Tração\n");		txtnormal
			cout << "\t- A força de tração é calculada de acordo com outras forças; \n\t- Portanto, não há cálculos DIRETOS disponíveis.";
		}
		fflush(stdin);		txtnormal
		printf("\n\n  Deseja sair? ");		gets(sair);		strlwr(sair);
		if(strstr("ssimsairclaropa",sair)){
			clrscr();  verde   printf("\n\tTerminal limpado.\n");	txtnormal
			break;
		}
		else if(strstr("ssimsairclaropa",sair)==0){			clrscr();	txtnormal
		}
	}while(strstr("ssimsairclaropa",escolha)==0);
	cianoclaro	printf("\n\tRetornando ao menu principal...\n");
}

void teoria(){
	char escolha[8],sair[7];	cianoclaro
	printf("\n\tAcessando o menu de teorias.\n");   Sleep(1400);   txtnormal   clrscr();
	do{
		printf("\n - Categorias: \n");		verde
		printf("   · Força\n   · Vetor\n   · Exemplos de Força\n   · Leis de Newton\n   · Força Resultante\n");	 txtnormal
		/*textcolor();*/	printf(" - Para qual categoria você deseja ir? ");		gets(escolha);		strlwr(escolha);
		if (strstr("forcaforçafrocafroça",escolha)){
			cianoclaro	printf("\n\tCategoria de Força. \n");	txtnormal
			printf("- Conceito: Grandeza física");  amarelo  cout<<" VETORIAL";  txtnormal  cout<<", que pode variar a\n  velocidade de corpos e deformá-los;\n";
			printf("- Não é visível, apenas suas ações; \n- Medida em ");	  cianoclaro	printf("Newtons [N]\n");	txtnormal
		}
		else if (strstr("vetorvetrocetorvwtorvwtprveortveotr",escolha)){
			cianoclaro	 printf("\n\tCategoria de vetores.\n");	  txtnormal
			printf("- Um vetor é um seguimento de reta orientado(uma setinha,traço).\n");
			printf("- Sempre apresenta 3 aspectos:\n");
			printf("  ·");  amarelo  cout<<" Módulo";  txtnormal  printf(": Valor numérico (Intensidade) do vetor + Unidade de medida da intensidade ;\n");
			printf("  ·");	amarelo	 cout<<" Direção"; txtnormal  printf(": Horizontal/Vertical/Diagonal;\n");
			printf("  ·");  amarelo  cout<<" Sentido"; txtnormal printf(": Norte, Sul, Leste, Oeste, Direita, Esquerda, Cima, Baixo, ...\n");
		}
		else if (strstr("exemplosexmplosexesmplos",escolha)){		exemplos();
		}
		else if (strstr("forcaresultante",escolha)){	resultante();		// função para mostrar força resultante
		}
		else if (strstr("lis leis de newton",escolha)){
			cout << "\n\tLeis de Newton\n";
			textbackground(8);	textcolor(0);
			cout << "- Primeira Lei de Newton - Princípio da Inércia\n";
			cout << "  Todo corpo tende a permanecer em equilíbrio ";	azulesc   cout << "estático";  txtnormal  cout << " ou ";  vermelho  cout << "dinâmico\n";  txtnormal 
			cout << "  A MENOS que uma ";  vermelho  cout<<"FORÇA";  txtnormal  cout<<" atue nele, alterando assim sua";  azulcla  cout << " velocidade\n";
			textbackground(8);	textcolor(0);
			cout << "\n- Segunda Lei de Newton - Princípio Fundamental da Dinâmica\n";
			cout << "  A resultante das forças é proporcional ao produto da massa pela\n  aceleração do corpo\t\t\t\t\t\t \n";
			txtnormal	textbackground(0);
			printf("\t- Fórmula: 	"); 	vermelhoclaro	printf("F");	txtnormal	printf(" = "); 	amarelo		printf("m "); 	txtnormal	printf("·");	azulesc		printf(" a \n");	
			textbackground(8);	textcolor(0);
			cout << "\n- Terceira Lei de Newton - Princípio da Ação e Reação\n";
			cout << "  Toda força tem uma reação proporcional ao produto da massa pela aceleração do corpo\n";
			textcolor(8);	textbackground(0);
		}
		fflush(stdin);		txtnormal
		printf("\n\n  Deseja sair? ");		gets(sair);		strlwr(sair);
		if(strstr("ssimsairclaropa",sair)){
			clrscr();  verde   printf("\n\tTerminal limpado.\n");	txtnormal		break;
		}
		else if(strstr("ssimsairclaropa",sair)==0){			clrscr();	txtnormal
		}
	}while(strstr("ssimsairclaropa",escolha)==0);
	cianoclaro	printf("\n\tRetornando ao menu principal...\n");	
}
void exemplos(){
	cianoclaro	 printf("\n\tCategoria de exemplos de força.\n");
	verde	printf("   · Peso\n");		txtnormal
	printf("\t- Força que atrai os corpos para o centro do astro (corpo mais massivo);\n");
	printf("\t- Fórmula: 	"); 	vermelho	printf("P");	txtnormal	printf(" = "); 	amarelo		printf("m"); 	txtnormal	printf("·");	azulesc		printf(" g	\n");	
	vermelho	printf("\t\t  Peso[N]");	amarelo		printf("  Massa[kg]");	azulesc		printf("  gravidade[m/s²];\n");	txtnormal
	verde	printf("\n   · Normal\n");		txtnormal
	printf("\t- Força que uma superfície aplica sobre um objeto; \n");	 printf("\t- É perpendicular à superfície; \n");
	printf("\t- Calculada de acordo com outras forças; \n");	verde	
	cout<<"\t        ^\n\t    ";   txtnormal    cout<<"____";   verde   cout<<"|";  txtnormal   cout<<"____\n\t    |     |_|\n\t    |       |\n\t    |       |\n\t    ¯¯¯¯¯¯¯¯¯\t";
	//desenhanormal(10,5,20,10,'-','|')	;	//função com gotoxy para desenhar superfícies, mostrando a aplicação da força
	system("pause");	clrscr();
	verde	printf("\n   · Força Elástica\n");		txtnormal
	printf("\t- Força presente em corpos que possuem elasticidade, como\n\t  molas e elásticos; \n");
	printf("\t- Determina a deformação deste corpo, conforme ele\n\t  se estica/comprime(a depender da direção da força); \n");
	//desenhaelastica()		// função com gotoxy para desenhar molas, aplicação da força elástica
	verde	printf("\n   · Tração\n");		txtnormal
	printf("\t- Força existente em cordas, polias e roldanas - ao puxar algo;\n");
	//printf("\t- Topico item 4;\n");
}
void resultante(){
	clrscr();
	cianoclaro	 printf("\n\tCategoria de Força Resultante.\n");
	verde	printf(" · Força Resultante\n");		txtnormal
	printf("     - Força que representa todas as outras no sistema;\n");	cianoclaro
	printf("  · Tipos:\n");		azulesc
	cout<<"   A) Forças na mesma direção e sentido\n";	txtnormal
	cout<<"\t   _________\n\t   |       |";
	cout<<"\n       ";	amarelo  cout<<"<---";   txtnormal   cout<<"|       |\n       ";  vermelhoclaro  cout<<"<---";  txtnormal   cout<<"|       |\n\t   ¯¯¯¯¯¯¯¯¯\n\t Fórmula:\n\tFr = ";
	amarelo  cout<<"F1 ";  txtnormal  cout<<"+";  vermelhoclaro  cout<<" F2 ";  txtnormal cout<<"+ ... + Fn\n\n";
	azulesc	 cout<<"   B) Forças na mesma direção, e sentidos diferentes\n";	 txtnormal
	cout<<"\t   _________\n\t   |       |";
	cout<<"\n       ";	amarelo  cout<<"<---";   txtnormal   cout<<"|       |";   vermelhoclaro   cout<<"--->\n       ";   txtnormal   cout<<"    |       |\n\t   ¯¯¯¯¯¯¯¯¯\n\t Fórmula:\n\tFr = | ";
	amarelo	  cout<<"F1 ";   txtnormal  cout<<"- ";   vermelhoclaro   cout<<"F2";  txtnormal  cout<< " |\n\t      =";   textcolor(8);  cout<<"OU";  txtnormal  cout<<"=\n\tFr = | ";
	vermelhoclaro   cout<<"F2";   txtnormal  cout<<" - ";  amarelo	  cout<<"F1 ";   txtnormal   cout<< "|\n ";
	system("pause");	clrscr();	  azulesc
	cout<<"\n   C) Forças em direção perpendicular\n";	 amarelo
	cout<<"\t       ^      ";   cianoclaro  cout<<"^\n\t";  amarelo  cout<<"       |";  cianoclaro  cout<<"     /\n\t   ";   txtnormal    cout<<"____";   amarelo   cout<<"|";  txtnormal   cout<<"____";  cianoclaro  cout<<"/\n\t";   txtnormal   cout<<"   |     |_|";
	cout<<"\n\t   |       |";  vermelhoclaro  cout<<"---->\n";  txtnormal   cout<<"\t   |       |\n\t   ¯¯¯¯¯¯¯¯¯\n\t Fórmula:\n\t";  cianoclaro  cout<<"Fr "  txtnormal  cout<<"= ";
	amarelo  cout<<"F1";  txtnormal  cout<<"² + ";  vermelhoclaro  cout<<"F2";  txtnormal  cout<<"²\n";
	azulesc   cout<<"\n   D) Caso Geral\n";	  amarelo
	cout<<"\t              ^\n\t             /\n\t   ";   txtnormal    cout<<"_________";  amarelo  cout<<"/\n\t";   txtnormal   cout<<"   |       |";  verde  cout<<") ä";
	txtnormal	cout<<"\n\t   |       |";  vermelhoclaro  cout<<"----->\n";  txtnormal   cout<<"\t   |       |\n\t   ¯¯¯¯¯¯¯¯¯\n\t Fórmula:\n\t";
	cianoclaro  cout<<"Fr "  txtnormal  cout<<"= ";
	amarelo  cout<<"F1";  txtnormal  cout<<"² + ";  vermelhoclaro  cout<<"F2";  txtnormal  cout<<"² + 2·";
	amarelo	  cout<<"F1";	txtnormal  cout<<"·";  vermelhoclaro  cout<<"F2";  txtnormal  cout<<"·";	 verde  cout<<"cos(ä)\n";
	
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
