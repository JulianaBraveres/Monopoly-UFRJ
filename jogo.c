#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char nome[20];
    int preco;
    int estudante;
}Universidade;

void IniciandoTabuleiro(Universidade **tabuleiro, int size) {
    *tabuleiro = (Universidade *)malloc(size * sizeof(Universidade));

    
    strcpy((*tabuleiro)[0].nome, "COE100 - Vale 30");
    (*tabuleiro)[0].preco = 30;
    (*tabuleiro)[0].estudante = -1;

    strcpy((*tabuleiro)[1].nome, "COS110 - Vale 90");
    (*tabuleiro)[1].preco = 90;
    (*tabuleiro)[1].estudante = -1;
   
    strcpy((*tabuleiro)[2].nome, "COS230 - Vale 75");
    (*tabuleiro)[2].preco = 75;
    (*tabuleiro)[2].estudante = -1;
   
    strcpy((*tabuleiro)[3].nome, "FIS111 - Vale 30");
    (*tabuleiro)[3].preco = 30;
    (*tabuleiro)[3].estudante = -1;
   
    strcpy((*tabuleiro)[4].nome, "FIT112 - Vale 60");
    (*tabuleiro)[4].preco = 60;
    (*tabuleiro)[4].estudante = -1;
   
    strcpy((*tabuleiro)[5].nome, "IQG111 - Vale 60");
    (*tabuleiro)[5].preco = 60;
    (*tabuleiro)[5].estudante = -1;
   
    strcpy((*tabuleiro)[6].nome, "MAC118 - Vale 90");
    (*tabuleiro)[6].preco = 90;
    (*tabuleiro)[6].estudante = -1;
   
    strcpy((*tabuleiro)[7].nome, "EEG110 - Vale 75");
    (*tabuleiro)[7].preco = 75;
    (*tabuleiro)[7].estudante = -1;
   
    strcpy((*tabuleiro)[8].nome, "EEL280 - Vale 90");
    (*tabuleiro)[8].preco = 90;
    (*tabuleiro)[8].estudante = -1;
   
    strcpy((*tabuleiro)[9].nome, "EE670 - Vale 90");
    (*tabuleiro)[9].preco = 90;
    (*tabuleiro)[9].estudante = -1;
   
    strcpy((*tabuleiro)[10].nome, "FIS121 - Vale 30");
    (*tabuleiro)[10].preco = 30;
    (*tabuleiro)[10].estudante = -1;
   
    strcpy((*tabuleiro)[11].nome, "FIT122 - Vale 60");
    (*tabuleiro)[11].preco = 60;
    (*tabuleiro)[11].estudante = -1;
   
    strcpy((*tabuleiro)[12].nome, "MAC128 - Vale 60");
    (*tabuleiro)[12].preco = 60;
    (*tabuleiro)[12].estudante = -1;
   
    strcpy((*tabuleiro)[13].nome, "EEA212 - Vale 60");
    (*tabuleiro)[13].preco = 60;
    (*tabuleiro)[13].estudante = -1;
   
    strcpy((*tabuleiro)[14].nome, "ELL356 - Vale 60");
    (*tabuleiro)[14].preco = 60;
    (*tabuleiro)[14].estudante = -1;
   
    strcpy((*tabuleiro)[15].nome, "FIM230 - Vale 40");
    (*tabuleiro)[15].preco = 40;
    (*tabuleiro)[15].estudante = -1;
   
    strcpy((*tabuleiro)[16].nome, "FIN231 - Vale 30");
    (*tabuleiro)[16].preco = 30;
    (*tabuleiro)[16].estudante = -1;
   
    strcpy((*tabuleiro)[17].nome, "MAC238 - Vale 60");
    (*tabuleiro)[17].preco = 60;
    (*tabuleiro)[17].estudante = -1;
   
    strcpy((*tabuleiro)[18].nome, "MAE125 - Vale 90");
    (*tabuleiro)[18].preco = 90;
    (*tabuleiro)[18].estudante = -1;
   
    strcpy((*tabuleiro)[19].nome, "COE241 - Vale 75");
    (*tabuleiro)[19].preco = 75;
    (*tabuleiro)[19].estudante = -1;
   
    strcpy((*tabuleiro)[20].nome, "COE350 - Vale 30");
    (*tabuleiro)[20].preco = 30;
    (*tabuleiro)[20].estudante = -1;
   
    strcpy((*tabuleiro)[21].nome, "EEE321 - Vale 80");
    (*tabuleiro)[21].preco = 80;
    (*tabuleiro)[21].estudante = -1;
   
    strcpy((*tabuleiro)[22].nome, "EEL580 - Vale 50");
    (*tabuleiro)[22].preco = 50;
    (*tabuleiro)[22].estudante = -1;
   
    strcpy((*tabuleiro)[23].nome, "FIM240 - Vale 60");
    (*tabuleiro)[23].preco = 60;
    (*tabuleiro)[23].estudante = -1;
   
    strcpy((*tabuleiro)[24].nome, "FIN241 - Vale 30");
    (*tabuleiro)[24].preco = 30;
    (*tabuleiro)[24].estudante = -1;
   
    strcpy((*tabuleiro)[25].nome,  "COC351 - Vale 75");
    (*tabuleiro)[25].preco = 75;
    (*tabuleiro)[25].estudante = -1;
   
    strcpy((*tabuleiro)[26].nome, "COE240 - Vale 75");
    (*tabuleiro)[26].preco = 75;
    (*tabuleiro)[26].estudante = -1;
   
    strcpy((*tabuleiro)[27].nome, "COM352 - Vale 60");
    (*tabuleiro)[27].preco = 60;
    (*tabuleiro)[27].estudante = -1;
   
    strcpy((*tabuleiro)[28].nome, "EEE322 - Vale 30");
    (*tabuleiro)[28].preco = 30;
    (*tabuleiro)[28].estudante = -1;
   
    strcpy((*tabuleiro)[29].nome, "EEH210 - Vale 30");
    (*tabuleiro)[29].preco = 30;
    (*tabuleiro)[29].estudante = -1;
   
    strcpy((*tabuleiro)[30].nome, "EEL338 - Vale 60");
    (*tabuleiro)[30].preco = 60;
    (*tabuleiro)[30].estudante = -1;
   
    strcpy((*tabuleiro)[31].nome, "COE360 - Vale 75");
    (*tabuleiro)[31].preco = 75;
    (*tabuleiro)[31].estudante = -1;
   
    strcpy((*tabuleiro)[32].nome, "COM361 - Vale 75");
    (*tabuleiro)[32].preco = 75;
    (*tabuleiro)[32].estudante = -1;
   
    strcpy((*tabuleiro)[33].nome, "EEL339 - Vale 30");
    (*tabuleiro)[33].preco = 30;
    (*tabuleiro)[33].estudante = -1;
   
    strcpy((*tabuleiro)[34].nome, "EEL438 - Vale 60");
    (*tabuleiro)[34].preco = 60;
    (*tabuleiro)[34].estudante = -1;
   
    strcpy((*tabuleiro)[35].nome, "EEL438 - Vale 75");
    (*tabuleiro)[35].preco = 75;
    (*tabuleiro)[35].estudante = -1;
   
    strcpy((*tabuleiro)[36].nome, "EEL878 - Vale 75");
    (*tabuleiro)[36].preco = 75;
    (*tabuleiro)[36].estudante = -1;
   
    strcpy((*tabuleiro)[37].nome, "EQE487 - Vale 60");
    (*tabuleiro)[37].preco = 60;
    (*tabuleiro)[37].estudante = -1;
   
    strcpy((*tabuleiro)[38].nome, "COE470 - Vale 75");
    (*tabuleiro)[38].preco = 75;
    (*tabuleiro)[38].estudante = -1;
   
    strcpy((*tabuleiro)[39].nome, "COE471 - Vale 75");
    (*tabuleiro)[39].preco = 75;
    (*tabuleiro)[39].estudante = -1;
}

void tabuleiroLivre(Universidade *tabuleiro) {
    free(tabuleiro);
}

void imprimirTabueiro(Universidade *tabuleiro, int size) {
    int i;
    printf("---- Tabuleiro ----\n");
    for (i = 0; i < size; i++) {
        printf("%d. %s\n", i + 1, tabuleiro[i].nome);
    }
    printf("-------------------\n");
}

void jogarMonopoly(Universidade *tabuleiro, int size, int contadorJogadores) {
    int posicaoJogador[contadorJogadores];
    int horasJogador[contadorJogadores];
    int i;

    for(i = 0; i < contadorJogadores; i++) {
        posicaoJogador[i] = 0;
        horasJogador[i] = 3600;
    }

    int jogadorAtual = 0;

    while (horasJogador[jogadorAtual] > 0) {
        printf("Jogador %d na posicao %d. Horario disponivel: %d\n", jogadorAtual + 1, posicaoJogador[jogadorAtual] + 1, horasJogador[jogadorAtual]);
        printf("Pressione Enter para rolar os dados...\n");
        getchar();

        int dado1 = rand() % 6 + 1;
        int dado2 = rand() % 6 + 1;
        int totaDado = dado1 + dado2;

        printf("Você rolou %d + %d = %d\n", dado1, dado2, totaDado);

        posicaoJogador[jogadorAtual] = (posicaoJogador[jogadorAtual] + totaDado) % size;

        printf("Você caiu em %s\n", tabuleiro[posicaoJogador[jogadorAtual]].nome);

        if (tabuleiro[posicaoJogador[jogadorAtual]].estudante == -1) {
            printf("Deseja comprar Vor %d? (1 - Sim, 0 - Não): ", tabuleiro[posicaoJogador[jogadorAtual]].preco);
            int escolha;
            scanf("%d", &escolha);

            if (escolha == 1) {
                if (horasJogador[jogadorAtual] >= tabuleiro[posicaoJogador[jogadorAtual]].preco) {
                    tabuleiro[posicaoJogador[jogadorAtual]].estudante = jogadorAtual;
                    horasJogador[jogadorAtual] -= tabuleiro[posicaoJogador[jogadorAtual]].preco;
                    printf("Você comprou %s!\n", tabuleiro[posicaoJogador[jogadorAtual]].nome);
                } else {
                    printf("Voce nao tem horario suficiente para comprar Vn");
                }
            }
        } else if (tabuleiro[posicaoJogador[jogadorAtual]].estudante == jogadorAtual) {
            printf("Você ja e o dono dVn");
        } else {
            printf("Você precisa pagar taxa para o dono dVn");
            horasJogador[jogadorAtual] -= tabuleiro[posicaoJogador[jogadorAtual]].preco / 2;
            int estudante = tabuleiro[posicaoJogador[jogadorAtual]].estudante;
            printf("Voce pagou %d para Jogador %d, o dono de %s.\n", tabuleiro[posicaoJogador[jogadorAtual]].preco / 2, estudante + 1, tabuleiro[posicaoJogador[jogadorAtual]].nome);
        }

        if (horasJogador[jogadorAtual] <= 0) {
            printf("Jogador %d jubilou! FIM DE JOGO!!!.\n", jogadorAtual + 1);
            break;
        }

        printf("\n");

        jogadorAtual = (jogadorAtual + 1) % contadorJogadores;
    }
}

int main() {
    
    srand(time(NULL));
    int tamanhoTabuleiro = 40;
    Universidade *tabuleiro;

    IniciandoTabuleiro(&tabuleiro, tamanhoTabuleiro);
    imprimirTabueiro(tabuleiro, tamanhoTabuleiro);
    jogarMonopoly(tabuleiro, tamanhoTabuleiro, 2);
    tabuleiroLivre(tabuleiro);

    return 0;
}
