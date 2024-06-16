#include<stdio.h> 

typedef struct Two_Dimension_Vector
{
    int x;
    int y;
}TDV;

int main() 
{
    TDV v1;
    printf("Enter the value of x and y dimension respectively :- \n");
    scanf("%d",&v1.x);
    scanf("%d",&v1.y);
    printf("\n");
    printf("The vector is: %di + %dj",v1.x,v1.y);
    return 0;
}