#include<stdio.h>
#include<string.h> 

int main() 
{
    char ch[50];
    char a[50];
    char b;
    int i=0;
    printf("Enter the first string :- \n");
    scanf("%s",ch);
    printf("Enter the second string character by character :- \n");
    while(b!='\n')
    {
        fflush(stdin);
        scanf("%c",&b);
        a[i]=b;
        i++;
    }
    a[i-1]='\0';
    printf("The first string is : %s\n",ch);
    printf("The second string is : %s\n",a);
    int x=strcmp(ch,a);
    if(x==0)
    {
        printf("Hurray!! Matched!");
    }
    else
    {
        printf("Damn!! Unmatched!");
    }
    return 0;
}