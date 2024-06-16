#include<stdio.h> 

int main() 
{
    char ch;
    printf("Enter the character to be checked :-\n");
    scanf("%c",&ch);
    if((int)ch>=97 && (int)ch<=122)
    {
        printf("Lower Case!!");
    }
    else
    {
        printf("Not Lower Case!!");
    }
    return 0;
}