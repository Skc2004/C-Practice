#include<stdio.h> 

int positive_integer_counter_in_array(int *a,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            c++;
        }
    }
    return c;
}

int main() 
{
    int x;
    printf("Enter the size of array you want :-\n");
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        printf("Enter the %dth element of array : ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("The number of positive integers in the given array is : %d",positive_integer_counter_in_array(a,x));
    return 0;
}