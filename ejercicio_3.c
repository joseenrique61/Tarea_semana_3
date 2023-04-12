//Ejercicio 3: Leer un número entero y mostrar todos los divisores exactos comprendidos entre el 1 y el número.
//Se incluye la librería <stdio.h> para utilizar las funciones printf y scanf;
#include <stdio.h>

int main()
{
    int num = 0;
    printf("Ingrese un valor entero: ");
    scanf("%i", &num);
    
    //Se itera desde el 1 hasta el número ingresado y se revisa en cada iteración si es divisible entre el número de iteración. Si es divisible, se imprime.
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%i ", i);
        }
    }
}