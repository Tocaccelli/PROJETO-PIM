#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED

#include "caso.h"

#define TAM 50
#define SIZE_TAM 100
#define CARDN 16
#define CARDC 3
#define CARDV 5
#define MAX_TAM_TICKET 50

int i, j;
int opcao_pag;
int aprovado;
int pix_number;
int ticket_visitante;
int pag_confirmado;
int op_continue;
int sairfinal;
int continueobra;
float notaimpacto, notaexpre, notaint, notaconex, notainov, medianota;

struct ticket {
    char codigo[MAX_TAM_TICKET];
    int secao[MAX_TAM_TICKET];
    float preco;
};

typedef struct pag_dados
{
    char card_nome[TAM];
    int card_number[CARDN];
    int card_codigo[CARDC];
    float card_validade[CARDV];
}pag_dados;

void pagamentos(){

        struct ticket ticket;
        struct pag_dados pag;

        printf("=====TICKET DREAM WITH=====\n");
        printf("QUAL SE��O GOSTARIA DE ASSISTIR?\n");
        printf("[1] - HIST�RIA DO UNIVERSO\n");
        printf("[2] - HISTORIA DE STEPHEN HAWKING\n");
        printf("[3] - HISTORIA DE ALBERT EINSTEIN\n");
        printf("[4] - HIST�RIA DA RELATIVIDADE GERAL\n");
        printf("Qual se��o gostaria de assistir: ");
        scanf("%d", &ticket.secao);

        system("cls");
        printf("=====SELECIONE A FORMA DE PAGAMENTO=====\n");
        printf("[1] - CR�DITO\n");
        printf("[2] - D�BITO\n");
        printf("[3] - PIX\n");
        printf("Digite a op��o de pagamento: ");
        scanf("%d", &opcao_pag);


        FILE *p_arq;
        FILE *p_ticket;

        p_arq = fopen("cadastro.txt", "a+");
        p_ticket = fopen("tickets.txt", "a+");

        switch(opcao_pag){
            case 1:
                system("cls");
                printf("====CR�DITO SELECIONADO=====\n");
                printf("N�mero do cart�o: ");
                scanf("%d", &pag.card_number);
                printf("Nome: ");
                scanf("%s", &pag.card_nome);
                // fgets(pag.card_nome, TAM, stdin);
                printf("Validade: ");
                scanf("%f", &pag.card_validade);
                printf("CVV: ");
                scanf("%d", &pag.card_codigo);
                fprintf(p_arq, "%d\n %s\n %f\n %d\n", pag.card_number, pag.card_nome, pag.card_validade, pag.card_codigo);
                aprovado = 1;
                fclose(p_arq);

                if(aprovado = 1){
                    system("cls");
                    printf("=====GERANDO TICKET=====");
                    ticket.codigo[MAX_TAM_TICKET] = 1 + (rand() % 10000);
                    printf("NOME: %s", dadoscliente.nome_cliente);
                    printf("SE��O: %d", ticket.secao);
                    printf("N�MERO TICKET: %d" , ticket.codigo);
                    fprintf(p_ticket, "%s\n %d\n %d\n", dadoscliente.nome_cliente, ticket.secao, ticket.codigo);
                }
                printf("\n[1] - IR PARA SE��O");
                printf("\n[2] - RETORNAR AO MENU\n");
                printf("Digite a op��o: ");
                scanf("%d", &op_continue);
                sleep(2);

                    if(op_continue == 1){
                        printf("\n====VISITANDO SE��O====");
                        sleep(2);
                        system("cls");
                    }else if(op_continue == 2){
                        printf("\n====RETORNANDO AO MENU=====");
                        sleep(2);
                        menu();
                    }else{
                        printf("\nOP��O INCORRETA!\nRETORNANDO AO MENU!");
                        sleep(2);
                        menu();
                    }
            break;

            case 2:
                system("cls");
                printf("====D�BITO SELECIONADO=====\n");
                printf("N�mero do cart�o: ");
                scanf("%d", &pag.card_number);
                printf("Nome: ");
                scanf("%s", &pag.card_nome);
                // fgets(pag.card_nome, TAM, stdin);
                printf("Validade: ");
                scanf("%f", &pag.card_validade);
                printf("CVV: ");
                scanf("%d", &pag.card_codigo);
                fprintf(p_arq, "%d\n %s\n %f\n %d\n", pag.card_number, pag.card_nome, pag.card_validade, pag.card_codigo);
                aprovado = 1;
                fclose(p_arq);

                if(!aprovado){
                    printf("====PAGAMENTO RECUSADO===");
                    sleep(2);
                    system("cls");
                    pagamentos();
                }else{
                    system("cls");
                    printf("\n=====GERANDO TICKET=====");
                    ticket.codigo[MAX_TAM_TICKET] = 1 + (rand() % 10000);
                    printf("NOME: %s", dadoscliente.nome_cliente);
                    printf("SE��O: %d", ticket.secao);
                    printf("N�MERO TICKET: %d" , ticket.codigo);
                    fprintf(p_ticket, "%s\n %d\n %d\n", dadoscliente.nome_cliente, ticket.secao, ticket.codigo);
                }
                    printf("\n[1] - IR PARA SE��O");
                    printf("\n[2] - RETORNAR AO MENU");
                    printf("Digite a op��o: ");
                    scanf("%d", &op_continue);

                    if(op_continue == 1){
                        printf("\n====VISITANDO SE��O====");
                        sleep(2);
                        system("cls");
                    }else if(op_continue == 2){
                        printf("\n====RETORNANDO AO MENU=====");
                        sleep(2);
                        menu();
                    }else{
                        printf("\nOP��O INCORRETA!\nRETORNANDO AO MENU!");
                        sleep(2);
                        menu();
                    }
                break;

            case 3:
                system("cls");
                printf("=====PIX SELECIONADO=====\n");
                pix_number = 1 + (rand() % 10000);
                printf("CHAVE PIX: %d", pix_number);
                printf("\n[1] - J� PAGUEI\n");
                printf("[2] - TROCAR FORMA DE PAGAMENTO\n");
                printf("Digite a op��o: ");
                scanf("%d", &pag_confirmado);

                if(pag_confirmado = 1){
                    system("cls");
                    ticket.codigo[MAX_TAM_TICKET] = 1 + (rand() % 10000);
                    printf("NOME: %s\n", dadoscliente.nome_cliente);
                    printf("SE��O: %d\n", ticket.secao);
                    printf("N�MERO TICKET: %d\n" , ticket.codigo);
                    fprintf(p_ticket, "%s\n %d\n %d\n", dadoscliente.nome_cliente, ticket.secao, ticket.codigo);
                }
                printf("\n[1] - IR PARA SE��O");
                printf("\n[2] - RETORNAR AO MENU\n");
                printf("Digite a op��o: ");
                scanf("%d", &op_continue);
                sleep(2);

                if(op_continue == 1){
                    printf("\n====VISITANDO SE��O====");
                    sleep(2);
                    system("cls");
                }else if(op_continue == 2){
                    printf("\n====RETORNANDO AO MENU=====");
                    sleep(2);
                    menu();
                }else{
                    printf("\nOP��O INCORRETA!\nRETORNANDO AO MENU!");
                    sleep(2);
                    menu();
                }
                break;
    }
    switch(ticket.secao[0]){
        case 1:
            printf("====OBRAS IMERSIVAS DE FRIDA KAHLO====\n\n");
            printf("Digite [1] - Continuar: ");
            scanf("%d", &continueobra);
            system("pause");
            break;
    }

    system("cls");
    printf("=====NOTAS PARA A OBRA=====\n");
    printf("DE 0 a 10\n");
    printf("Qual a nota para o Impacto Emocional: ");
    scanf("%f", &notaimpacto);
    printf("Qual a nota para a Expressividade Art�stica: ");
    scanf("%f", &notaexpre);
    printf("Qual a nota para a Interatividade: ");
    scanf("%f", &notaint);
    printf("Qual a nota para Conex�o com a Hist�ria de Frida Kahlo: ");
    scanf("%f", &notaconex);
    printf("Qual a nota para Inova��o na Experi�ncia Imersiva: ");
    scanf("%f", &notainov);

    medianota = (notaimpacto + notaexpre + notaint + notaconex + notainov) / 5;

    printf("\nA m�dia de nota �: %.2f", medianota);

    printf("\n[1] - RETORNAR AO MENU\n[2] - SAIR\n");
    printf("Digite a op��o: ");
    scanf("%d", &sairfinal);

    switch(sairfinal){
    case 1:
        printf("RETORNANDO AO MENU!");
        sleep(2);
        system("cls");
        menu();
        break;
    case 2:
        system("taskkill /f /im sistemaMuseu33.exe");
        break;
    }

    fclose(p_arq);
    fclose(p_ticket);
}

int pesquisarTicket(int numTicket) {
    FILE *p_ticket;
    struct ticket ticket;

    // Abre o arquivo no modo de leitura
    p_ticket = fopen("tickets.txt", "r");

    // Loop para ler cada ticket do arquivo
    while  (fread(&ticket, sizeof(struct ticket), 1, p_ticket) == 1) {
        if (ticket.codigo == numTicket){
            // Ticket encontrado, imprime as informa��es
            printf("\n===== TICKET ENCONTRADO =====\n");
            printf("N�mero do Ticket: %d\n", ticket.codigo);
            printf("Nome do Cliente: %s\n", dadoscliente.nome_cliente);
            printf("Se��o: %d\n", ticket.secao);
            printf("=============================\n");
            fclose(p_ticket);
            return 1;
        }
    }

    // Se o ticket n�o foi encontrado
    printf("Ticket com n�mero %d n�o encontrado.\n", numTicket);
    printf("Retornando ao menu!");
    sleep(2);
    system("cls");
    menu();

    // Fecha o arquivo
    fclose(p_ticket);
    return 0;
}

#endif // PAGAMENTO_H
