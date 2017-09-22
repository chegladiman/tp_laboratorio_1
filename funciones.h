#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);





/**
 * Recorre el array y lo inicializa en 0 (cero).
 * @param lista el array se pasa como parametro.
 * @return el indice inicializado en 0 (cero)
 */
void init(EPersona personas[]);


/**
 * Solicita ingresar datos de una persona.
 * @param solicita que se ingrese el nombre
 * @param solicita que se ingrese la edad.
 * @param solicita que se ingrese el DNI.
 * @return los datos ingresados.
 */
int incluirPersona(EPersona personas[]);



/**
 * Borra mediante DNI la persona ingresada.
 * @param Solicita como parametro a ingresar el DNI.
 * @return el registro completo sin los datos borrados.
 */
int borrarPersona(EPersona personas[]);



/**
 * Ordena por nombre de manera ascendente el registro de datos
 * @param lista el array se pasa como parametro.
 * @return la lista de personas orndenadas por nombre
 */
void ordenarPorNombre(EPersona personas[]);



/**
 * Muestra un gráfico de barras vertical sobre las edades.
 * @param menor18 referencia a la edad.
 * @param edad19a35 referencia a la edad.
 * @param mayor35 referencia a la edad.
 * @return gráfico de barras vertical simbolizado por asteriscos.
 */
void graficoPorEdades(EPersona personas[]);


#endif // FUNCIONES_H_INCLUDED
