#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ERROS 6

void mostra_forca(int erros) {
    printf("Erros: %d de %d\n", erros, MAX_ERROS);
    switch (erros) {
        case 0: printf("\n\n\n\n\n"); break;
        case 1: printf("\n\n\n\n\n___|\n"); break;
        case 2: printf(" |\n |\n |\n |\n_|___\n"); break;
        case 3: printf(" _______\n |\n |\n |\n |\n_|___\n"); break;
        case 4: printf(" _______\n |     |\n |     O\n |\n |\n_|___\n"); break;
        case 5: printf(" _______\n |     |\n |     O\n |    /|\\\n |\n_|___\n"); break;
        case 6: printf(" _______\n |     |\n |     O\n |    /|\\\n |    / \\\n_|___\n"); break;
    }
}

int main() {
    char palavra[100], palavra_oculta[100];
    int tamanho, i, erros = 0;
    int letras_corretas = 0;
    char chute;
    int ja_chutou[26] = {0};

    printf("Digite a palavra secreta: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; // Remove o \n

    tamanho = strlen(palavra);

    // Inicializa palavra oculta com '_'
    for (i = 0; i < tamanho; i++) {
        if (palavra[i] == ' ') {
            palavra_oculta[i] = ' ';
            letras_corretas++;
        } else {
            palavra_oculta[i] = '_';
        }
    }
    palavra_oculta[tamanho] = '\0';

    // Limpa a tela (funciona no Linux/macOS)
    printf("\033[H\033[J");

    while (erros < MAX_ERROS && letras_corretas < tamanho) {
        mostra_forca(erros);

        printf("Palavra: %s\n", palavra_oculta);
        printf("Chute uma letra: ");
        scanf(" %c", &chute);
        chute = tolower(chute);

        if (chute < 'a' || chute > 'z') {
            printf("Por favor, chute uma letra válida.\n");
            continue;
        }

        if (ja_chutou[chute - 'a']) {
            printf("Você já chutou essa letra.\n");
            continue;
        }

        ja_chutou[chute - 'a'] = 1;

        int acertou = 0;
        for (i = 0; i < tamanho; i++) {
            if (tolower(palavra[i]) == chute && palavra_oculta[i] == '_') {
                palavra_oculta[i] = palavra[i];
                letras_corretas++;
                acertou = 1;
            }
        }

        if (!acertou) {
            erros++;
            printf("Letra errada!\n");
        }

        printf("\n");
    }

    mostra_forca(erros);

    if (letras_corretas == tamanho) {
        printf("Parabéns! Você ganhou! A palavra era: %s\n", palavra);
    } else {
        printf("Você perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}
