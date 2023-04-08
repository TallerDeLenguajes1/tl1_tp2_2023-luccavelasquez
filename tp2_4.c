#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu {
    int velocidad;
    int long anio;
    int cantidad;
    char *tipo_cpu;
}compu;

void listaPCs(compu compus[5]);
void pcVieja(compu compus[5]);
void pcVelocidad(compu compus[5]);

int main()
{
    compu compus[5];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int numRandom;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        
        compus[i].velocidad = 1 + rand() % 3;
        compus[i].anio = 2015 + rand() % 9; 
        compus[i].cantidad = 1 + rand() % 9;

        compus[i].tipo_cpu = malloc(10*sizeof(char));
        //ver como liberar la memoria, y si es necesario
        //la declaracion del puntero, o solo poner em la struct
        //tipo_cpu tipo[10]..
        
        numRandom = rand() % 6;
        
        for (int j = 0; tipos[numRandom][j] != '\0' ; j++)
        {
            compus[i].tipo_cpu[j] = tipos[numRandom][j];
                 
        }
        //puts(compus[i].tipo_cpu); Muestra el nombre de los procesadores aletorios..
    }

    listaPCs(compus); 
    pcVieja(compus);
    pcVelocidad(compus);

    return 0;
}

void listaPCs(compu compus[5])
{
    
    for (int i = 0; i < 5; i++)
    {
        
        printf("Pc numero: %d", i+1);
        fflush(stdin);

        printf("\nVelocidad: %d",compus[i].velocidad);

        printf("\nAnio: %d",compus[i].anio);
        
        printf("\nCantidad Nucleos: %d",compus[i].cantidad);
        fflush(stdin);
        printf("\nTipo Cpu: %s\n",compus[i].tipo_cpu);
        printf("----------------------------------\n");
        
    }
}

void pcVieja(compu compus[5])
{
    int anioMenor;
    anioMenor = compus[0].anio;

    for (int i = 0; i < 5; i++)
    {
        if (compus[i].anio < anioMenor)
        {
            anioMenor = compus[i].anio;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (compus[i].anio == anioMenor)
        {
            printf("La pc mas vieja es la: %d\n",i+1);
            printf("Velocidad: %d\n",compus[i].velocidad);
            printf("Cantidad Nucleos: %d\n",compus[i].cantidad);
            printf("Anio: %d\n",compus[i].anio);
            printf("Tipo Cpu: %s\n",compus[i].tipo_cpu);
            printf("----------------------------------\n");
        }
        
    }
    
    

}
void pcVelocidad(compu compus[5])
{
    int velocidadMenor;
    velocidadMenor = compus[0].velocidad;

    for (int i = 0; i < 5; i++)
    {
        if (compus[i].velocidad < velocidadMenor)
        {
            velocidadMenor = compus[i].velocidad;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (compus[i].velocidad == velocidadMenor)
        {
            printf("La pc mas veloz es: %d\n",i+1);
            printf("Velocidad: %d\n",compus[i].velocidad);
            printf("Cantidad Nucleos: %d\n",compus[i].cantidad);
            printf("Anio: %d\n",compus[i].anio);
            printf("Tipo Cpu: %s\n",compus[i].tipo_cpu);
            printf("----------------------------------\n");
        }
        
    }
    

}
