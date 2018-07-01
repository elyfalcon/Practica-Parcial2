#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Estructura.h"

eAlumno* nuevo(void)
{
    eAlumno* returnAux;
    returnAux = (eAlumno*)malloc(sizeof(eAlumno));
    return returnAux;
}

int charToint(char* charInt)
{
    int nro;
    nro = atoi(charInt);
    return nro;
}

int Alumno_setEdad(eAlumno* this, int dato)
{
    this->edad = dato;
    return 0;
}

int Alumno_setLegajo(eAlumno* this, int dato)
{
    this->legajo = dato;
    return 0;
}

int Alumno_setSexo(eAlumno* this,  char *dato)
{
    strcpy(this->sexo,dato);
    return 0;
}

int Alumno_setName(eAlumno* this, const char* name)
{
    strcpy(this->nombre, name);
    return 0;
}
