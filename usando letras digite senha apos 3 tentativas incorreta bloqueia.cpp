#include <stdio.h>
#include <string.h> // Required for strcmp

int tentativa = 0;

int main() {
    char senha[20]; // Declared as an array to store a string

    do {
        printf("Digite sua senha \n");
        scanf("%s", senha); // Arrays don't need the & operator with scanf
        
        if (strcmp(senha, "abc") != 0) {
            printf("Senha incorreta \n");    
            tentativa++;
        }
    } while (strcmp(senha, "abc") != 0 && tentativa < 3);

    if (strcmp(senha, "abc") == 0) {
        printf("Acesso permitido");
    } else {
        printf("Acesso bloqueado");
    }
    
    return 0;
}
