/*
#ifndef SECOES_H_INCLUDED
#define SECOES_H_INCLUDED

#include "pagamento.h"
#include "dados.h"

void notas_secao();
void pagamentos();

void secao(){

    int continueobra;

    struct ticket ticket;

    switch(ticket.secao[0]){
        case 1:
            printf("====SEMANA DA ARTE MODERNA====\n\n");
            printf("Manifesto Antrop�fago de Oswald de Andrade: Embora n�o seja uma obra visual,\no Manifesto Antrop�fago de Oswald de Andrade � uma pe�a liter�ria\nque desafiou as normas culturais e prop�s a ideia de devorar elementos estrangeiros\n para criar uma arte verdadeiramente brasileira.\nA imersividade aqui est� na provoca��o intelectual e na proposta\nde uma abordagem cultural �nica.");
            printf("Digite [1] - Continuar: ");
            scanf("%d", &continueobra);
            system("pause");
            notas_secao();
            break;
        case 2:
            printf("====SEMANA DA ARTE MODERNA====\n\n");
            printf("Abaporu de Tarsila do Amaral:\nCriada em 1928, essa obra ic�nica de Tarsila do Amaral representa\num homem com uma cabe�a gigante e um corpo alongado, deitado em um cen�rio surreal.\n A imersividade reside na estiliza��o da figura, criando um ambiente on�rico que desafia\n as conven��es art�sticas da �poca.");
            printf("Digite [1] - Continuar: ");
            scanf("%d", &continueobra);
            system("pause");
            notas_secao();
            break;
        case 3:
            printf("====SEMANA DA ARTE MODERNA====\n\n");
            printf("Oper�rios de Anita Malfatti:\nAnita Malfatti, uma das artistas mais influentes da Semana de Arte Moderna,\napresentou Oper�rios, uma pintura que retrata a for�a e a dignidade dos trabalhadores industriais.\nA obra � imersiva na medida em que destaca a import�ncia da classe trabalhadora na constru��o da identidade nacional brasileira.");
            printf("Digite [1] - Continuar: ");
            scanf("%d", &continueobra);
            system("pause");
            notas_secao();
    }
}

#include "pagamento.h"
#endif // SECOES_H

*/
