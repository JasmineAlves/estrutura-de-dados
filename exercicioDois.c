/*ATIVIDADE 2
Escreva uma função em C que recebe o endereço da posição inicial de uma
string e um caractere.

A função deve retornar o endereço da posição do caractere lido, caso o
caracterece não exista na string a função deve retornar NULL.

Na função main() solicite uma string e um caractere ao usuário e, utilizando
a função anterior, mostre na tela os caracteres da string que se encontram a
partir do caractere lido.*/

#include <stdio.h>

char * funcao(char *s, char c){
    int i;
    for(i =0; *(s+i) != '\0'; i++){
        if (*(s+i) == c){
            return (s+i);
        }
    }
    return NULL;
}

int main(void){
    char string[100], caractere, *retorno;
    int i;

    puts("Insira uma string: ");
    scanf("%s", string);
    fflush(stdin);
    puts("Insira um caractere: ");
    scanf("%c", &caractere);

    retorno = funcao(string, caractere);

    for(i = 0; *(retorno+i) != '\0'; i++){
        printf("%c", *(retorno+i));
    }

    return 0;
}
