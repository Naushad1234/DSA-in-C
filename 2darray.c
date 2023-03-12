//Creating a two dimensional array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    int *B[3];
    int **C;
    int i,j;

    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));
     for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ",B[i][j]);
            printf("\n");
        }
    }

}
