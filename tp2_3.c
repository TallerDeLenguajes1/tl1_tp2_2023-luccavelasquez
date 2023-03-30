#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main(){

    float mt[N][M];
    float numRandom;
    int i,j;
    srand(time(NULL));
    float *pmt = &mt[0][0]; 

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            numRandom = 1 + rand() % 100;
            *(pmt+(i * 7 +j)) = numRandom;

            printf("%lf ", *(pmt+(i * 7 +j)));
        }

        printf("\n");
    }


    return 0;
}

