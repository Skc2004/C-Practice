#include<stdio.h> 
#include<string.h> 

void slice(int m,int n,char ch[]);

int main() 
{
    char ch[50];
    int m,n;
    printf("Enter the string :- \n");
    scanf("%s",ch);
    printf("\n");
    printf("Enter the starting index for string slice (remember the index starts from 0) :- \n");
    scanf("%d",&m);
    printf("Enter the ending index for string slice (remember the index starts from 0) :- \n");
    scanf("%d",&n);
    slice(m,n,ch);
    return 0;
}

void slice(int m,int n,char ch[])
{
    if(n<=strlen(ch) && m>=0)
    {
    char c[50];
    int j=0;
    for(int i=m;i<=n+1;i++)
    {
        c[j]=ch[i];
        j++;
    }
    c[j-1]='\0';
    printf("The sliced string is : %s",c);
    }
    else
    {
        printf("You have entered the starting or ending index out of bound!!!");
    }
}