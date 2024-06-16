#include<stdio.h> 

void reverse_array(int *a,int n)
{
    for(int i=0;i<(n/2);i++)
    {
        int temp=a[i];
        a[i]=a[6-i-1];
        a[6-i-1]=temp;
    }
}

int main() 
{
    int b[]={1,2,3,4,5,6};
    reverse_array(b,6);
    printf("The reverse array is as follows :- \n");
    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("The %dth element of array is : %d\n",(i+1),b[i]);
    }
    return 0;
}