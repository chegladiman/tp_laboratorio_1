#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 2

void init(EPersona personas[]){
    int i;
    for (i=0;i<CANT;i++)
    {
        personas[i].estado=0;
    }

    }

int incluirPersona(EPersona personas[])
{
    int i;

    for(i=0;i<CANT;i++){
            if(personas[i].estado==0){



                    system("cls");

                    printf("Ingresar nombre: ");
                    fflush(stdin);
                    scanf("%[^\n]", personas[i].nombre);

                    printf("\nIngresar edad:");
                    scanf("%d", &personas[i].edad);

                    printf("\nIngresar DNI:");
                    scanf("%l", &personas[i].dni);

                    personas[i].estado= 1;
                    break;
                    }
                }

}

int borrarPersona(){

    int i;
    EPersona personas[CANT];
    long int dniAux;

    printf("\nIngresar DNI:");
    scanf("%l", &personas[i].dni);
    for(i=0;i<CANT;i++){
        if(personas[i].dni==dniAux)
            {
            personas[i].estado=0;
           }
    }

}

void ordenarPorNombre(EPersona personas[])
{
    int i;
    int j;
    char nombreAuxiliar;

    /*for(i=0;i<CANT-1;i++)
    {
        for(j=i+1;j<CANT;j++){

        if (strcmp(nombre.nombre,personas[i].nombre)>0){
        printf("El nombre %d. es %s",personas[i],nombreAuxiliar);
        }


    }
//}
//}
*/
            for(i=0;i<CANT-1;i++){

            for(j=i+1;j<CANT;j++){
            if((strcmp(personas[i].nombre,personas[j].nombre))>0)
            {
            nombreAuxiliar=personas[i];
            personas[i]=pers[j];
            personas[j]=nombreAuxiliar;
            }
            }
            }
