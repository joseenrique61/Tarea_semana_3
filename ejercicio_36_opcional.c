//Ejercicio 36: Mostrar en pantalla la tabla de multiplicar del número 5.
//Este ejercicio lo hago de manera adicional y opcional, ya que el ejercicio 3 y el 30 son el mismo.
//Se incluye la librería <stdio.h> para utilizar las funciones printf y scanf;
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("5 x %i = %i\n", i, 5 * i);
    }
}