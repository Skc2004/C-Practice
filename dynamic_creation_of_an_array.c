#include<stdio.h> 
#include<stdlib.h>

int main() 
{ 
    int *ptr;
    int n;
    printf("Enter the size of integer array :- \n");
    scanf("%d",&n);
    malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth Integer: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n \n");
    for (int i = 0; i < n; i++)
    {
        printf("%dth Integer is: %d \n",i+1,ptr[i]);
    }
    return 0;
}