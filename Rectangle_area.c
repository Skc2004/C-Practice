#include<stdio.h> 

int main() 
{ 
    int l;
    int b;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&b);
    int area = l*b;
    printf("The area of the Rectangle is : %d",area);
    return 0;
}
