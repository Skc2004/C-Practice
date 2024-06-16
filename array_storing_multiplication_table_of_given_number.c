#include<stdio.h> 

int main() 
{
    int n;
    printf("Enter the number whose multiplication table you want to store in the array : ");
    scanf("%d",&n);
    int table[10];
    for(int i=0;i<10;i++)
    {
        table[i]=n*(i+1);
    }
    printf("The multiplication table of %d is as follows :- \n",n);
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d \n",(i+1),table[i]);
    }
    return 0;
}