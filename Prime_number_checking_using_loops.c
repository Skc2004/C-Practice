#include<stdio.h> 

int main() 
{ 
    int n;
    int c=0;
    printf("Enter the number :- \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
            if(c==2)
    {
        printf("%d is Prime.",n);
    }
    else
    {
        printf("%d is not Prime.",n);
    }
    return 0;
}