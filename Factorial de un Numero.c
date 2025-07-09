/*Calcular el factorial de un numero
usando recursividad*/
#include<stdio.h>
int factorial(int n)
{
    if(n == 0) /*Factorial de 0 por definicion de factorial */
    {
        return 1;
    }
     
    else
    {
        return n * factorial(n - 1);
    }
    
}
int main()
{
    int n; //numero ingresado por el usuario
    do
    {
    printf("Ingresa el numero a calcular el factorial: ");
    scanf("%d", &n);
    fflush(stdin);
      
    if(n < 0 )
    {
        printf("No existe el factorial de numeros negativos\n");
    } else
      {
        factorial(n);
        printf("El factorial de %d es: %d", n, factorial(n));
      } 
    } while(n < 0);
    return 0;
}
