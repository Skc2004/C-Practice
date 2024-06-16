#include<stdio.h> 

void encryption(char *ptr);

int main() 
{
    char ch[50];
    printf("Enter the string to be encrypted: ");
    scanf("%s",ch);
    //Encryption of string
    encryption(ch);
    return 0;
}

void encryption(char *ptr)
{
    if(ptr==NULL)
    {
        printf("You Entered an Empty String!!");
    }
    else
    {
        int i=0;
        while(ptr[i]!='\0')
        {
            ptr[i]=(char)((int)ptr[i]+1);
            i++;
        }
        printf("The encrypted string is :- \n");
        printf("%s",ptr);
    }
}