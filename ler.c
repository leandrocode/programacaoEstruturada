#include <stdio.h>
int main (){
int num;
    printf ("digite um numero inteiro qualquer\n");
    scanf ("%i",&num);
    printf (": %i", num);
if (num>=6){
    printf ("\naprovado");
}
if (num<6){
    printf ("\nreprovado");
}
return 0;
}
