#include <stdio.h>


int leerEntero(char mensaje[])
{
    int numero;
    while (1)
    {
        printf("%s", mensaje);

        if (scanf("%d", &numero) == 1)
        {
            return numero;
        }

        printf("Error: debe ingresar un numero entero.\n");

        //Limpiar entrada invalida
        while (getchar() != '\n');
    }
}

int calcularPromedio(int valores[], int cantidad){
    int suma = 0;
    int promedio = 0;
    for (int i = 0; i < cantidad; i++)
    {   
        suma = suma + valores[i];
    }

    promedio = suma/cantidad;
    
    return promedio;
}


void bienvenida()
{
    printf("=====================================\n");
    printf("   Actividad laboratorio Sensor      \n");
    printf("=====================================\n");
    printf("\n");
}

void despedida()
{
    printf("\n");
    printf("=====================================\n");
    printf("              USACH                  \n");
    printf("=====================================\n");

    printf("U   U  SSSSS   AAAAA   CCCCC  H   H\n");
    printf("U   U  S       A   A   C      H   H\n");
    printf("U   U  SSSSS   AAAAA   C      HHHHH\n");
    printf("U   U      S   A   A   C      H   H\n");
    printf("UUUUU  SSSSS   A   A   CCCCC  H   H\n");

    printf("=====================================\n");
    printf(" Universidad de Santiago de Chile\n");
    printf("   Copyright (c) 2026 Angel Treupil\n");
    printf("       Todos los derechos reservados\n");
    printf("=====================================\n");
}

/*
Bloque I: Captura de datos 
Crea un programa que solicite al usuario ingresar N lecturas enteras del sensor en un 
arreglo int lecturas[N]. Utiliza un ciclo for o while tradicional dentro de la función 
main para encontrar e imprimir el valor máximo y mínimo.
*/
int main()
{
    bienvenida();
    
    printf("Bloque I: Captura de datos\n");

    int cantidad;

    //Debemos solicitar que ingrese la cantidad de lecturas, para eso debemos validar que siempre ingrese enteros
    do
    {
        cantidad = leerEntero("Ingrese cantidad de lecturas: ");

        if (cantidad <= 0)
        {
            printf("Error: la cantidad debe ser mayor que 0.\n");
        }

    } while (cantidad <= 0);

    //definimos el largo del arreglo por la cantidad ingresada por el usuario
    int lecturas[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        printf("Lectura %d\n", i + 1);
        lecturas[i] = leerEntero("Ingrese valor: ");
    }

    int maximo = lecturas[0];
    int minimo = lecturas[0];

    for (int i = 1; i < cantidad; i++)
    {
        if (lecturas[i] > maximo)
        {
            maximo = lecturas[i];
        }

        if (lecturas[i] < minimo)
        {
            minimo = lecturas[i];
        }
    }

    printf("\nValor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);

    
    printf("\n");
    printf("Bloque II: Metricas del sensor\n");

    //debemos calcular el promedio de los datos ingresados
    int promedio = calcularPromedio(lecturas, cantidad);

    //ahora el segundo punto pide que el usuario establesca los limites
    int limiteMaximo = 0;
    printf("Ingrese el limite maximo: ");
    scanf("%d", &limiteMaximo);
    printf("\n");

    if (limiteMaximo < promedio)
    {
        printf("Alerta!! El valor promedio %d ha superado el limite maximo establecido de %d %\n", promedio, limiteMaximo);
    }
    
    printf("Valor promedio: %d\n", promedio);

    despedida();
    
    //Esperamos a cerrar el ejecutable cuando el usuario presione cualquier tecla
    printf("\nPresiona Enter para salir...");
    while (getchar() != '\n'); 
    getchar();

    return 0;
}

//made in Angel

