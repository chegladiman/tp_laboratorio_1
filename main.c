#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 2



int main()
{
    char seguir='s';
    int opcion=0;

    EPersona personas[CANT];

    init(personas);


    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

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
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
