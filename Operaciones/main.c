#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    int opcion;

    printf("\t\t<<<<< C A L C U L A D O R A >>>>>\n\n");
    system("color f0");
    printf("Opcion suma ------> 1\n");
    printf("Opcion resta -----> 2\n");
    printf("Opcion multi. ----> 3\n");
    printf("Opcion division --> 4\n");
    printf("Opcion factoreo --> 5\n");
    printf("Opcion salida ----> 6\n");

     do
        {
            printf("\n\nElija una opcion: ");
            scanf("%i", &opcion);

            switch(opcion)
            {
            case 1:
                {
                    printf("\n<<Usted eligio la operacion suma>>\n\n");
                    GetSuma();
                    break;
                }
            case 2:
                {
                    printf("\n<<Usted eligio la operacion resta>>\n\n");
                    GetResta();
                    break;
                }
            case 3:
                {
                    printf("\n<<Usted eligio la operacion multiplicacion>>\n\n");
                    GetMultiplicacion();
                    break;
                }
            case 4:
                {
                    printf("\n<<Usted eligio la operacion division>>\n\n");
                    GetDivision();
                    break;
                }
            case 5:
                {
                    printf("\n<<Usted eligio la operacion factoreo>>\n\n");
                    GetFactoreo();
                    break;
                }
            default:
                {
                    printf("\n<<Cancelar>>\n\n");
                    return 0;
                }
            }

        }while(opcion!=6);


    return 0;
}
