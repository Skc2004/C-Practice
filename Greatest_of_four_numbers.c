#include<stdio.h> 

int main() 
{ 
    int a,b,c,d;
    printf("Enter the four values one after other :-\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int max;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    if(max<d)
    {
        max=d;
    }
    printf("The Maximum among the four numbers is : %d",max);
    return 0;
}   