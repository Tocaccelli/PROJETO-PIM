#ifndef TELALOGIN_H_INCLUDED
#define TELALOGIN_H_INCLUDED

#define MAX_SENHA 16
#define MAX_LOGIN 50
#define CLEAN_BUFF do{ int c; while((c = getchar()) != '\n' && c != EOF);}while(0)

#include "menu.h"

void menu();
char* CriaSenha();

void telalogin() {

    int Usuario(FILE* file, char* user, char* senha) // Valida usu�rio
{
    char tmpLogin[MAX_LOGIN];
    char tmpSenha[MAX_SENHA];

    fscanf(file, "%s", tmpLogin);

    while (!feof(file))
    {
        if (!strcmp(tmpLogin, user))
        {
            fscanf(file, "%s", tmpSenha);

            if (!strcmp(tmpSenha, senha)) {
                return 1;
            }
        }
        else
        {
            fscanf(file, "%*s");
        }
        fscanf(file, "%s", tmpLogin);
    }
    return 0;
}

    FILE* fpIN;

    int option = 0;

	char *user  = (char*)malloc(sizeof *user * MAX_LOGIN);
	char *senha,
		 *confirmaSenha;

    do {
        system("cls");
        printf("----------------------------\n");
        printf("   DreamWith - SISTEMA\n");
        printf("----------------------------\n");
        printf("[1] - LOGIN\n[2] - CADASTRAR\n[3] - SAIR\n");
        printf("Digite uma op��o: ");
        scanf("%d", &option);
        CLEAN_BUFF;

        switch(option) {
            case 1:
                system("cls");
                printf("=====LOGIN=====\n");
                printf("Usuario: ");
                fgets(user, MAX_LOGIN, stdin);
                user[strcspn(user, "\n")] = '\0'; // Remove a quebra de linha do final

                printf("Senha: ");
                senha = CriaSenha();

                fpIN = fopen("usuarios.txt", "r");
                if(Usuario(fpIN, user, senha)) {
                    printf("\nUsuario Registrado.\n");
                    system("cls");
                    menu();
                } else {
                    printf("\nUsuario N�o Registrado\n");
                    printf("RETORNANDO AO MENU!");
                    sleep(2);
                    system("cls");
                    telalogin();
                }

                fclose(fpIN);
                free(senha);
                break;

            case 2:
                system("cls");
                printf("=====CADASTRAR=====\n");
                printf("Usuario: ");
                fgets(user, MAX_LOGIN, stdin);
                user[strcspn(user, "\n")] = '\0'; // Remove a quebra de linha do final

                do {
                    printf("Senha: ");
                    senha = CriaSenha();
                    printf("\nConfirmacao de senha: ");
                    confirmaSenha = CriaSenha();
                    fpIN = fopen("usuarios.txt", "w");
                    printf("\n");

                    if(!strcmp(senha, confirmaSenha)) {
                        break;
                    } else {
                        printf("As senhas n�o s�o iguais. Tente novamente.\n");
                    }
                } while(1);

                fpIN = fopen("usuarios.txt", "a");
                fprintf(fpIN, "%s %s\n", user, senha);
                fclose(fpIN);

                free(senha);
                free(confirmaSenha);
                break;

            case 3:
                system("taskkill /f /im sistemaMuseu33.exe");
                break;

            default:
                printf("Escolha 1, 2 ou 3...\n");
                break;
        }

    } while(1);

    return;
}

char* CriaSenha() {
    register int i;
    char* senha = (char*)malloc(sizeof *senha * MAX_SENHA);

    for(i = 0; i < MAX_SENHA; i++) {
        senha[i] = getch();
        if(senha[i] == '\r') {
            break;
        } else {
            printf("*");
        }
    }
    senha[i] = '\0';

    return senha;
}

#endif // TELALOGIN_H_INCLUDED
