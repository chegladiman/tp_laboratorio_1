#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int i;
    EPersona personas[5];

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



                for(i=0;i<21;i++){

                    system("cls");

                    printf("Ingresar nombre: ");
                    fflush(stdin);
                    scanf("%[^\n]", personas[i].nombre);

                    printf("\nIngresar edad:");
                    fflush(stdin);
                    scanf("%d", personas[i].edad);

                    printf("\nIngresar DNI:");
                    fflush(stdin);
                    scanf("%d", personas[i].dni);

                }

                break;
            case 2:
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
