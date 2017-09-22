#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 20



int main()
{
    char seguir='s';
    int opcion=0;

    EPersona personas[CANT];

    init(personas);


    while(seguir=='s')
    {
        printf("Bienvenido! Que desea hacer?\n\n\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n\n");

        printf("Opcion seleccionada: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                incluirPersona(personas);
                break;
            case 2:
                borrarPersona(personas);
                break;
            case 3:
                ordenarPorNombre(personas);
                break;
            case 4:
                graficoPorEdades(personas);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
