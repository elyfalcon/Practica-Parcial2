#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "tools.h"
#include "Estructura.h"
#include "Archivos.h"
#define NOM_ARCHIVO "alumnos.cvs"

int main()
{
    char seguir='S';
    int opcion=0;
    int retorno=0;

    ArrayList *ListaAlumnos;
    ListaAlumnos=al_newArrayList();

    if(ListaAlumnos !=NULL)
    {

        while(seguir=='S')
        {
            ShowMenu("1: Cargar el archivo\n2: Listar ordenados por edad\n");
            scanf("%d",&opcion);
            ValidaMenu(opcion,1,2);
            switch(opcion)
            {
                case 1:
                cargarDesdeArchivo(ListaAlumnos,NOM_ARCHIVO);
                break;
                case 2:

                break;
                case 3:
                opcion='N';
                break;

            }//fin switc


        }//fin while


    }//fin if(lista!=NULL)
    return 0;
}
