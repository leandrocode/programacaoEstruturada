#include <stdio.h>
/*
fazer o código com as seguintes condições:
    = 10 parabens
    entre 7 e 9 aprovado
    = 6 na media
    entre 3 e 6 SUB
    < 3 volte sempre
no fim escrever: "obrigado por usar"
*/
int main (){
float num1, num2, res;
printf ("digite a primeira nota:\n");
scanf ("%f", &num1);

printf("digite a segunda nota:\n");
scanf("%f", &num2);

res = (num1 + num2) / 2;

if(res == 6){
    printf("\n\n***NA MEDIA***\n");
}
else{
    if (res>6){
        printf ("\n\n***APROVADO***\n");
    }
    else{
        printf("\n\n***REPROVADO***\n\nNos vemos no proximo semestre\nBy: Vicentini\n");
    }
}
printf("\nMEDIA FINAL:\n%.2f\n", res);
return 0;
}
