#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "caso.h"

void cadastro();

int opcao;

void menu(){ // OPCOES p/ USAR NO SISTEMA
        system("cls");
		printf("==GERENCIAR MUSEU DREAM WITH==\n");
	    printf("[1] - CADASTRAR VISITANTES\n");
	    printf("[2] - ATUALIZAR DADOS DE VISITANTES\n");
	    printf("[3] - GERAR TICKET PARA VISITANTES\n");
	    printf("[4] - CONSULTAR POR TICKET\n");
	    printf("[5] - PESQUISAR POR VISITANTES CADASTRADO\n");
	    printf("[9] - SAIR DO SISTEMA!\n");
	    printf("Digite uma op��o: ");
	    scanf("%d", &opcao);
	    system("cls");
	    cadastro();
}

#endif // MENU_H
