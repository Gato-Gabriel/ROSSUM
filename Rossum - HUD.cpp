/*
	HUD dos programas Rossum
*/
#include <stdio.h>
#include <conio.c>
#include <iostream>
#include <locale.h>
using namespace std;
void moldura (int ci, int li, int cf, int lf, char car, char cra){
	//for(int b=1;b<701;b++){
	for(int zapo=0;zapo<=130;zapo++){
		for (int c=ci; c<=cf; c++){
			gotoxy(c,li);	printf("%c", car);		//cout << car;
			gotoxy(c,lf);	printf("%c", car);		//cout << car;
		}
		for (int l=li; l<=lf; l++){
			gotoxy(ci,l);	printf("%c", cra);
			gotoxy(cf,l);	printf("%c", cra);
		}
	}
//	}
//	Sleep(1000);
}
main(){
	setlocale(LC_ALL,"Portuguese");
	textcolor(9);
	moldura(8,5,24,12,'-','|');
	textcolor(8);	gotoxy(30,8);	cout << "Currently displaying -";
	textcolor(6);	gotoxy(30,9);	cout << "  Rossum's Test HUD";
	textcolor(2);
	moldura(58,5,80,15,'=','/');
	textcolor(7);
	cout << "\n\n\n";
	//gotoxy(9,16);
	textcolor(3);
	for(int i=0;i<=14;i+=2){			// Faz o padrao, a frequencia da borda do circulo;
		cout << "\t";
		int c=14-i;
		//if(i==0){	cout<<" -\n";	}
		for(c;c>=0;c--){			//Espaca da borda;
			cout << " ";
		}
		cout << "/";
		if(i==14){
			cout << "-------";
			textcolor(7);
			cout <<"Versão: Rossum X";
			textcolor(3);
			cout << "-----";
		}
		else{
			for (int j=0;j<=(i*2);j++){
				cout << " ";		// bagulhin que preenche a forma
			}
		}
		cout << "\\";
		cout << "\n";
	}
	for(int i=14;i>=0;i-=2){			// Faz o padrão, a frequencia da borda da forma;
		cout << "\t";
		int c=14-i;
		for(c;c>=0;c--){			//Espaça da borda;
			cout << " ";
		}
		cout << "\\";
		if(i==14){
			cout << "-------";
			textcolor(7);
			cout <<"Status: Limpo";
			textcolor(3);
			cout << "--------";
		}
		else{
			for (int j=0;j<=(i*2);j++){
				cout << " ";		// bagulhin que preenche a forma
			}
		}
		cout << "/";
		cout << "\n";
	}
	/*for (int i=0;i<=30;i++){
		printf("\n");
	}*/
}
