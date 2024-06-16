#include<stdio.h> 

int main() 
{
    int x,y,z;
    printf("Enter the 1st dimension :- \n");
    scanf("%d",&x);
    printf("Enter the 2nd dimension :- \n");
    scanf("%d",&y);
    printf("Enter the 3rd dimension :- \n");
    scanf("%d",&z);
    int arr[x][y][z];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("The address of %d%d%dth element is : %u \n",i,j,k,&arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}