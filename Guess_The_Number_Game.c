#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main() { 
    int n;
    int c=0;
    srand(time(0));
    n=rand()%100+1;
    int flag=0;
    while(flag==0)
    {
        printf("Guess the number between 1 to 100 :- \n");
        int guess;
        scanf("%d",&guess);
        if(guess==n)
        {
            printf("You Won in %d guesses !!!",c);
            flag=1;
        }
        else if(guess<n)
        {
            printf("Enter a Larger Number. \n");
        }
        else if (guess>n)
        {
            printf("Enter a Smaller Number. \n");
        }
        c++;
    }
    return 0;
}