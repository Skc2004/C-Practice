#include<stdio.h> 

typedef struct Two_Dimension_Vector_sum
{
    int x;
    int y;
}tdvs;

tdvs sum(tdvs v1,tdvs v2)
{
    tdvs result;
    result.x=v1.x + v2.x;
    result.y=v1.y + v2.y;
    return result;
}

int main() 
{
    tdvs a;
    tdvs b;
    printf("Enter the x and y dimension of vector 1 respectively :- \n");
    scanf("%d",&a.x);
    scanf("%d",&a.y);
    printf("Enter the x and y dimension of vector 2 respectively :- \n");
    scanf("%d",&b.x);
    scanf("%d",&b.y);
    tdvs h = sum(a,b);
    printf("The sum vector is: %di + %dj",h.x,h.y);
    return 0;
}