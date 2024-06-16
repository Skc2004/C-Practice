#include<stdio.h> 

int custom_strlen(char ch[]);

int main() 
{
    char c[50];
    printf("Enter the string whose length is required :- \n");
    scanf("%s",c);
    printf("The Length of the given string is : %d",custom_strlen(c));
    return 0;
}

int custom_strlen(char ch[])
{
    int i=0;
    int c=0;
    while (ch[i]!='\0')
    {
       c++;
       i++; 
    }
    return c;
}