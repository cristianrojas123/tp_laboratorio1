#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
#include "Validacion.h"

int GetSuma()
{
    int a;
    int b;
    int resultado;
    int li_salida = 1;
    char texto[] = "";

    printf("Ingresa el primer numero: ");
    scanf("%s",&texto[0]);

    if(validNumber(&texto[0]))
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("error");
        li_salida = 0;
    }

    if(li_salida == 1)
    {
    printf("Ingresa el segundo numero: ");
    scanf("%s",&texto[0]);

        if(validNumber(&texto[0]))
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }
    }

    if(li_salida == 1)
    {
        resultado = a + b;
        printf("El resultado es %i",resultado);
    }

    return 0;
}

int GetResta()
{
    int a;
    int b;
    int resultado;
    int li_salida = 1;
    char texto[] = "";

    printf("Ingresa el primer numero: ");
    scanf("%s",&texto[0]);

    if(validNumber(&texto[0]))
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("error");
        li_salida = 0;
    }

    if(li_salida == 1)
    {
    printf("Ingresa el segundo numero: ");
    scanf("%s",&texto[0]);

        if(validNumber(&texto[0]))
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }
    }

    if(li_salida == 1)
    {
        resultado = a - b;
        printf("El resultado es %i",resultado);
    }

    return 0;
}

int GetMultiplicacion()
{
    int a;
    int b;
    int resultado;
    int li_salida = 1;
    char texto[] = "";

    printf("Ingresa el primer numero: ");
    scanf("%s",&texto[0]);

    if(validNumber(&texto[0]))
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("error");
        li_salida = 0;
    }

    if(li_salida == 1)
    {
    printf("Ingresa el segundo numero: ");
    scanf("%s",&texto[0]);

        if(validNumber(&texto[0]))
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }
    }

    if(li_salida == 1)
    {
        resultado = a * b;
        printf("El resultado es %i",resultado);
    }

    return 0;
}

int GetDivision()
{
    int a;
    int b;
    int li_salida = 1;
    int resultado;
    char texto[] = "";

    printf("Ingrese el primer numero: ");
    scanf("%s", &texto[0]);

    if( validNumber(&texto[0]) )
    {
        a = convertCharToInt(&texto[0]);
    }
    else
    {
        printf("Error");
        li_salida = 0;
    }

    if (li_salida == 1)
    {
        printf("Ingrese el segundo numero: ");
        scanf("%s", &texto[0]);

        if( validNumber(&texto[0]) )
        {
            b = convertCharToInt(&texto[0]);
        }
        else
        {
            printf("Error");
            li_salida = 0;
        }

        if(b == 0)
        {
            printf("ERROR, No se puede dividir por cero.\n");
            return 0;
        }

    }

    if (li_salida == 1)
    {
        resultado = a / b;
        printf("El resultado es: << %d >>",resultado);
    }

    return 0;

}
int GetFactoreo()
{
    int a;
    int i;
    int factorial = 1;

    printf("Ingrese el numero ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %d es %d",a,factorial);

    return 0;
}

