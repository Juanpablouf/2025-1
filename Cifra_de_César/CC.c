#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cifraDeCesar(char *mensagem, int deslocamento) {
    for (int i = 0; mensagem[i] != '\0'; i++) {
        char c = mensagem[i];
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            mensagem[i] = (c - base + deslocamento) % 26 + base;
        }
    }
}

int main() {
    char mensagem[1000];
    int deslocamento;

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Digite o deslocamento: ");
    scanf("%d", &deslocamento);

    cifraDeCesar(mensagem, deslocamento);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}