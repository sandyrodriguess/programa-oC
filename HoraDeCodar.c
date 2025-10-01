#include <stdio.h>
 
int main() {
    char nome[20] = "Bruno";
    int idade = 25;
    float altura = 1.75;
    int matricula = 25200;

    printf("Digite seu nome: \n"); 
    scanf("%s", &nome);

    printf("Digite sua idade: \n"); 
    scanf("%d", &idade); 
    
    printf("Digite sua altura: \n"); 
    scanf("%.2f", &altura);

    printf("Digite sua matricula: \n"); 
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d", nome, matricula);
    printf("\n Idade: %d - Altura: %f", idade , altura); 

    return 0; 

}
