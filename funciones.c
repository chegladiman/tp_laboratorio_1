#include <stdio.h>
#include <stdlib.h>
#define CANT 1
typedef struct {

    char nombre[50];
    int edad;
    int estado;
    long int dni;

}EPersona;


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

                    personas.estado= 1;
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
