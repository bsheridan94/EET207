
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int myNumbers[3][3];
int i = 0;
int f = 0;

printf("Please enter 3 numbers with a space in between each  for row 1\n");
scanf("%d %d %d", &myNumbers[0][0], &myNumbers[0][1], &myNumbers[0][2] );
printf("Please enter 3 numbers with a space in between each  for row 2\n");
scanf("%d %d %d", &myNumbers[1][0], &myNumbers[1][1], &myNumbers[1][2] );
printf("Please enter 3 numbers with a space in between each  for row 3\n");
scanf("%d %d %d", &myNumbers[2][0], &myNumbers[2][1], &myNumbers[2][2] );


int newMatrix[3][3];


for(i=0;i<3;i++){
    for(f=0; f<3; f++){
    newMatrix[i][f] = myNumbers[f][i];
    }
}


printf("\nTransposed matrix\n");


for(i=0;i<3;i++){
    for(f=0; f<3; f++){
    printf("%d", newMatrix[i][f]);
    }
    printf("\n");
}



return 0;
}




