#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "tools.h"

int main()
{
    char seguir='S';
    int opcion=0;
    while(seguir=='S')
    {
    ShowMenu("1: Tramite Urgente\n2: Tramite Regular\n3: Proximo Cliente\n4: Listar\n5: Informar");
    scanf("%d",&opcion);
    ValidaMenu(opcion,1,6);
     switch(opcion)
     {
     case 1:
        break;
     case 2:
        break;
     case 3:
        break;
     case 4:
     case 5:
        break;
     case 6:
        seguir='n';
        break;
     }//fin switch
    }//fin while




    return 0;
}
