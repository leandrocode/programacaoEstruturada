#include <stdio.h>
int main (){
float num1,num2,res;
printf ("digite a primeira nota:\n");
scanf ("%f",&num1);
printf("digite a segunda nota:\n");
scanf("%f",&num2);
res = (num1 + num2)/2;

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
printf("\nMEDIA FINAL:\n%f\n",res);
return 0;
}
