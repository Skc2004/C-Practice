#include<stdio.h> 

int main() 
{
    FILE *ptr;
    char x[50];
    ptr = fopen("File_Input","r");
    FILE *ptr1;
    ptr1=fopen("File_Output","w");
    int z=0;
    char c=' ';
    while(c!=EOF)
    {
        c=fgetc(ptr);
        fputc((int)c,ptr1);
        z++;
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}