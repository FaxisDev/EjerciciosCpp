#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char const *argv[])
{
    // Caracteristicas del arreglo: preguntas[tamaño_arreglo][tamaño_de_caracteres]
    char preguntas[5][100] = {
        "2 x 2 = 4?",
        "Mexico es una potencia mundial?",
        "Ingenieria en Informatica es la mejor carrera del mundo?",
        "Ubuntu es de Linux?",
        "Michael Jackson invento Facebook?"};
    //char respuestas[5] = {'v', 'f', 'f', 'v', 'f'};
    char respuestas[5][10] = {"v", "f", "f", "v", "f"};
    char co[5];

    int i = 0;
    while (i < 5)
    {

        do
        {

            printf("\n %s \n", preguntas[i]);
            scanf("%s", co);

            if (strcmp(co, "v") != 0 && strcmp(co, "f") != 0)
            {
                printf("Solo son preguntas de [f = falso / v = verdadero] \n\nVuelvelo a intentar \n");
            }

        } while (strcmp(co, "v") != 0 && strcmp(co, "f") != 0);

        // strcmp(VARIABLE1, VARIABLE2)
        //     Esta funcion regresa un numero cuando es 0,
        //     significa que son iguales y diferentes regresa un numero diferente eso depende

        if (strcmp(co, respuestas[i]) == 0)
        {
            printf("Es correcto! ");
        }
        else
        {
            printf("Es incorrecta tu respuesta ");
        }

        i += 1;
    }
    return 0;
}
