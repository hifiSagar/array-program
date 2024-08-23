
// 2d array MATRIX type
#include<stdio.h>
int main(){
int array[2][2];
printf("Add elements to 2d array \n");
for ( int i = 0; i < 2; i++)
{
   for ( int j = 0; j < 2; j++)
   {
    scanf("%d", & array[i][j]);
   }
   
}
printf("elements of 2d array \n");
for ( int i = 0; i < 2; i++)
{
   for ( int  j = 0; j < 2; j++)
   {
    printf("%d", array[i][j]);
   }


printf("\n");
}

    return 0;
}
