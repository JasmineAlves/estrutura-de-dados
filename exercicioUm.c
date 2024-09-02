/* ATIVIDADE 1
1.1. Escreva uma função em c responsável por imprimir o conteúdo dos n
elementos de um array de inteiros, conforme protótipo abaixo:
void printvint(int a[], int n);

1.2. Escreva uma função em c responsável por comparar o conteúdo dos n
elementos de 2 arrays e retornar 1 se forem iguais ou 0 se forem diferentes,
conforme protótipo abaixo:
int cmpvint(int a1[], int a2[], int n);

1.3. Escreva uma função em c responsável por verificar se um caractere c
existe em uma string e retornar 1 caso exista ou 0 caso contrário, conforme
protótipo abaixo:
int instring(char string[], char c);*/

#include <stdio.h>

void printvint(int a[], int n) {
    int i;
    for(i = 0; i<n; i++){
        printf("%i", a[i]);
    }
    printf("\n");
}

int cmpvint(int a1[], int a2[], int n){ 
    int i;
    for(i = 0; i <n; i++){
        if(a1[i] != a2[i]){
            return 0;
        }
    }
    return 1;
}

int instring(char string[], char c){    
    int i;
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == c){
            return 1;
        }
    }
    return 0;
}

int main(void){

    int teste[5] = {1, 2, 3, 4, 5};
    int array1[7] = {1, 2, 3, 4, 5, 6, 7};
    int array2[7] = {1, 2, 3, 4, 5, 6, 7};
    char s[] = "teste";

    printvint(teste, 5);

    if (cmpvint(array1, array2, 3) == 0){
        puts("As arrays sao DIFERENTES!");
    } else {
        puts("As arrays sao IGUAIS!");
    }

    if (instring(s, 'e') == 1){
        puts("O caractere EXISTE na string!");
    } else {
        puts("O caractere NAO EXISTE na string!");
    }

    return 0;
}
