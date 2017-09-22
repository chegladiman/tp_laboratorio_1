#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define CANT 5


void init(EPersona personas[])
{
    int i;
    for (i=0; i<CANT; i++)
    {
        personas[i].estado=0;
    }

}

int incluirPersona(EPersona personas[])
{
    int i;

    for(i=0; i<CANT; i++)
    {
        if(personas[i].estado==0)
        {
            system("cls");

            printf("Ingresar nombre: ");
            fflush(stdin);
            scanf("%[^\n]", personas[i].nombre);

            printf("\nIngresar edad:");
            scanf("%d", &personas[i].edad);

            printf("\nIngresar DNI:");
            scanf("%d", &personas[i].dni);

            personas[i].estado= 1;
            break;
        }
    }return 0;
}

int borrarPersona(EPersona personas[])
{

    int i;
    int dniAuxiliar;

    printf("\nIngresar DNI:");
    scanf("%d", &dniAuxiliar);
    for(i=0; i<CANT; i++)
    {
        if(personas[i].dni==dniAuxiliar)
        {
            personas[i].estado=0;
        }
    }return 0;
}

void ordenarPorNombre(EPersona personas[])
{
    int i;
    int j;
    char nombreAuxiliar[100];


    for(i=0; i<CANT-1; i++)
    {

        for(j=i+1; j<CANT; j++)
        {
            if((strcmp(personas[i].nombre,personas[j].nombre))>0)
            {
                strcpy(nombreAuxiliar,personas[i].nombre);
                strcpy(personas[i].nombre,personas[j].nombre);
                strcpy(personas[j].nombre,nombreAuxiliar);
            }
        }
    }
    printf("LISTA\n");
    for(i = 0; i<CANT; i++)
    {
        if(personas[i].estado == 1)
        {
            printf("%s\n",personas[i].nombre);
        }

    }
}



void graficoPorEdades(EPersona personas[])
{

    int i;
    int j;

    int menor18 = 0;
    int edad19a35 = 0;
    int mayor35 = 0;

    for(i = 0; i < CANT; i++)
    {
        if(personas[i].estado == 1)
        {
            if(personas[i].edad < 18)
                menor18++;
            else if(personas[i].edad >=19 && personas[i].edad < 35)
                edad19a35++;
            else
                mayor35++;
        }
    }

    int valor[2];
    valor[0] = menor18;
    valor[1] = edad19a35;
    valor[2] = mayor35;
    int max = 0;

    for (i = 0; i < CANT; i++)
        if (valor[i] > max)
            max = valor[i];

    for (i = max; i > 0; i--)
    {
        for (j = 0; j < 3; j++)
            if (valor[j] >= i)
                printf("    * ");
            else
                printf("      ");

        putchar('\n');
    }
    printf("<18   19-35   >35");
    putchar('\n');
}
