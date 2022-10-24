#include <stdio.h>
#include <stdlib.h>
//desenvolva um programa que leia 3 notas de 40 alunos,
//calcule e mostre a media aritmetica.
//a situação de aprovação de cada um deles
//lembre-se que apenas a media igual ou acima de 7 aprova o aluno


int main()
{
    float nota1,nota2,nota3,media;
    int aluno;
    for(aluno=1;aluno<=3;aluno++){

        printf("Digite a primeira nota do aluno: ");
        scanf("%f",&nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f",&nota2);
        printf("Digite a terceira nota do aluno: ");
        scanf("%f",&nota3);

        media = (nota1+nota2+nota3)/3;
        if(media>=7)
        {
            printf("Aluno aprovadocom media: %.2f\n", media);

        }
        else{
            printf("Aluno reprovado com media: %.2f\n", media );
        }





    }

    return 0;
}
