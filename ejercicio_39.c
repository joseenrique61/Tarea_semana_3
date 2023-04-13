//Ejercicio 39: Se define la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va sumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34....... Utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el número 10000.

//Se incluye la librería <stdio.h> para utilizar las funciones printf y scanf;
#include <stdio.h>

int main()
{
    //Se definen las variables a usar:
    //primerNumero: es el primer número de la suma.
    int primerNumero = 0;
    //segundoNumero: es el segundo número de la suma.
    int segundoNumero = 1;
    //suma: va a guardar la suma temporal en cada iteración.
    int suma = 0;

    //Se imprimen los primeros dos números de la serie, ya que estos no se van a imprimir en el ciclo.
    printf("0 1 ");
    while (1)
    {
        //Se comprueba si segundoNumero es mayor a 10000, ya que este es el que lleva la suma. Si lo es, se rompe el ciclo.
        if (segundoNumero >= 10000)
        {
            break;
        }

        //Se establecen los valores de las variables. En "suma" se guarda la suma de ambos números. El primer número se convierte en el segundo número, y el segundo número en la suma, siendo esta quien guarda el número de la serie obtenido en esta iteración.
        suma = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = suma;

        //Se imprime el valor obtenido de la serie en esta iteración.
        printf("%i ", segundoNumero);
    }
}