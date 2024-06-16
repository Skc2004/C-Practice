#include<stdio.h> 

int main() 
{
    FILE *ptr;
    int n;
    printf("Enter the number whose readable multiplication file is required :- \n");
    scanf("%d",&n);
    ptr = fopen("Multiplication_Table.txt","w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d x %d = %d \n",n,i,n*i);
    }
    fclose(ptr);
    return 0;
}