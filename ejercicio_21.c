//Ejercicio 12: Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.
//Se incluye la librería <stdio.h> para utilizar las funciones printf y scanf.
#include <stdio.h>

int main()
{
    //Se define la variable "num", que va a contener el número ingresado.
    int num = 0;
    //Se define la variable "suma", que va a llevar la suma total de los dígitos.
    int suma = 0;
    printf("Ingrese un numero entero: ");
    scanf("%i", &num);

    //Se itera desde el 0 hasta 3 (no inclusivo).
    while (1)
    {
        //Se verifica si el número es menor o igual a 0, para saber si se puede hacer la operación del módulo. De ser así, se rompe el ciclo.
        if (num <= 0)
        {
            break;
        }

        //Se obtiene el módulo del número con 10, de tal forma que se obtenga el último dígito del número.
        //Este número se suma a la variable que lleva la suma, y se elimina del número original.
        suma += num % 10;
        num /= 10;
    }

    //Se imprime la suma final.
    printf("La suma es: %i", suma);
}