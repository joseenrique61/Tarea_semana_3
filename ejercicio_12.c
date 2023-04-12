//Ejercicio 12: Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.
//Se incluye la librería <stdio.h> para utilizar las funciones printf y scanf.
#include <stdio.h>

int main()
{
    //Se define la variable "num", que va a contener el número ingresado.
    int num = 0;
    printf("Ingrese un numero entero de 3 digitos: ");
    scanf("%i", &num);

    //Se itera desde el 0 hasta 3 (no inclusivo).
    for (int i = 0; i < 3; i++)
    {
        //Se obtiene el módulo del número con 10, de tal forma que se obtenga el último dígito del número.
        //Este número se elimina del número original.
        int numeroActual = num % 10;
        num /= 10;

        //Se evalúa si el número es igual a 1. De ser así, se imprime la respuesta y se termina el programa.
        if (numeroActual == 1) 
        {
            printf("Si contiene el numero 1.");
            return 0;
        }
    }

    //Si la función llega hasta este punto significa que nunca se encontró un número 1, así que se imprime lo indicado.
    printf("No contiene el numero 1.");
}