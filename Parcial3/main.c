#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "tools.h"
#include "Estructura.h"
#include "Archivos.h"
//#define NOM_ARCHIVO "alumnos.cvs"
#define NOM_ARCHIVO "alumnos.csv"

int main()
{
    char seguir='S';
    int opcion;
    int retorno=0;

    ArrayList *ListaAlumnos;
    ListaAlumnos=al_newArrayList();
    ArrayList *ListaAux;
    ListaAux=al_newArrayList();

    if(ListaAlumnos !=NULL)
    {

        while(seguir=='S')
        {
            ShowMenu("1: Cargar el archivo\n2: Listar ordenados por edad\n");
            scanf("%d",&opcion);
            ValidaMenu(opcion,0,2);
            switch(opcion)
            {
                case 1:
                    cargarDesdeArchivo(ListaAlumnos,NOM_ARCHIVO);
                    break;
                case 2:
                   ListaAux=ListarPorEdad(ListaAlumnos,1);
                   if(ListaAux !=NULL)
                   {
                       MostrarElementos(ListaAlumnos,0,ListaAlumnos->len(ListaAlumnos));
                   }
                   else
                    printf("No hay nada para mostrar\n");

                break;
                case 0:
                seguir='n';
                break;

            }//fin switc


        }//fin while


    }//fin if(lista!=NULL)
    return 0;
}
