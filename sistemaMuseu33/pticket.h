#ifndef PTICKET_H_INCLUDED
#define PTICKET_H_INCLUDED

#include "menu.h"

#define MAX_TAM_TICKET 50

int pesquisarTicket(int numTicket) {
    FILE *p_ticket;
    struct Ticket ticket;

    // Abre o arquivo no modo de leitura
    p_ticket = fopen("tickets.txt", "r");

    if (p_ticket == NULL) {
        perror("Erro ao abrir o arquivo de tickets");
        exit(EXIT_FAILURE);
    }

    // Loop para ler cada ticket do arquivo
    while (fread(&ticket, sizeof(struct Ticket), 1, p_ticket) == 1) {
        if (ticket.numero == numTicket) {
            // Ticket encontrado, imprime as informa��es
            printf("\n===== TICKET ENCONTRADO =====\n");
            printf("N�mero do Ticket: %d\n", ticket.numero);
            printf("Nome do Cliente: %s\n", ticket.nomeCliente);
            printf("Se��o: %d\n", ticket.secao);
            printf("=============================\n");
            fclose(p_ticket);
            return 1;
        }
    }

    // Se o ticket n�o foi encontrado
    printf("Ticket com n�mero %d n�o encontrado.\n", numTicket);

    // Fecha o arquivo
    fclose(p_ticket);
    return 0;
}

#endif // PTICKET_H_INCLUDED
