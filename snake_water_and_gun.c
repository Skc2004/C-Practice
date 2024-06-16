#include<stdio.h> 
#include<time.h>
#include<stdlib.h>

int main() 
{
    int x;
    printf("!! WELCOME TO THE SNAKE, WATER and GUN GAME !!\n");
    printf("\n");
    printf("\n");
    printf("Choose from any of the following :- \n");
    printf("1. Snake \n");
    printf("2. Water \n");
    printf("3. Gun \n");
    printf("Your Choice: ");
    scanf("%d",&x);
    printf("\n");
    int c;
    srand(time(0));
    c=rand()%3+1;
    if(x==c)
    {
        printf("DRAW!!\n");
    }
    else if((x==1 && c==2) || (x==2 && c==3) || (x==3 && c==1))
    {
        printf("YOU WON!!\n");
    }
    else
    {
        printf("YOU LOST!!\n");
    }
    printf("\n");
    printf("Computer's choice: %d",c);
    return 0;
}