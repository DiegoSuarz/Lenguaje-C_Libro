/*Almacenar nombres y fechas de nacimiento de los estudiantes en un array, usando
campos de bits para los fechas de nacimiento

Cuando se termine, mostrar el nombre y la fecha de nacimiento de cada estudiante.
Mostrar cada fecha de nacimeinto como sigue: día de la semana, mes, día, año */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

int convertir (int m, int dd, int aa);

int main ()
{
    int mm, dd, aa, cont = 0;
    int dia_semana;

    typedef struct 
    {
        uint16_t mes : 4;
        uint16_t dia : 5;
        uint16_t anio : 7;
    }fecha;

    struct {
        char nombre[30];
        fecha fechaNacimiento;
    } estudiante[40];

    static char *diasemana[] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};

    static char *mes[] = {"enero, febrero, marzo, abril, mayo, junio, julio, Agosto, Septiembre, Octubre, Novienmbre, Diciembre"};

    printf("ingrese en nombre de alumno: ");
    scanf(" %[^\n]", estudiante[cont].nombre);

    while (strcmp(estudiante[cont].nombre, "FIN") != 0){
        printf("Fecha de nacimiento (mm dd aaaa): ");
        scanf("%d %d %d",&mm, &dd, &aa);

        estudiante[cont].fechaNacimiento.mes = mm;
        estudiante[cont].fechaNacimiento.dia = dd;
        estudiante[cont].fechaNacimiento.anio = aa - 1900;

        printf("\nNombre: ");
        scanf(" %[\n]", estudiante[++cont].nombre);
    }

    cont = 0;
    
    while (strcmp(estudiante[cont].nombre, "FIN") != 0){

        dia_semana = convertir(estudiante[cont].fechaNacimiento.mes, estudiante[cont].fechaNacimiento.dia, estudiante[cont].fechaNacimiento.anio);
        printf("\n%s    ",estudiante[cont].nombre);
        printf("%s %s %d, %d\n",diasemana[dia_semana], mes[estudiante[cont].fechaNacimiento.mes-1], estudiante[cont].fechaNacimiento.dia, estudiante[cont].fechaNacimiento.anio + 1900);
        ++cont;
    }
    
    return 0;
}

int convertir (int mm, int dd, int aa)
{
    long ndias;
    long nciclos;
    int nanios;
    int dia;

    ndias = (long) (30.42 * (mm -1 )) + dd;

    if (mm == 2) ++ ndias;
    if ((mm > 2) && (mm < 8)) --ndias;
    if ((aa % 4 == 0) && (mm > 2)) ++ndias;

    nciclos = aa/4;
    ndias += nciclos * 1461;

    nanios = aa % 4;
    if ( nanios > 0)
        ndias += 365;
    if (ndias > 59)
        dia = ndias % 7;
    dia = ndias % 7;
    return (dia);
    



}