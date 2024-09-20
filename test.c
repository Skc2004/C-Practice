#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
}std;

void getdata(){
    printf("Enter name: ");
    scanf("%s",ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);
}
void display_data(){
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);}

int main()
{
    struct Student *ptr; // Pointer to structure
    ptr = &std;
    getdata();
    display_data();
    return  0;
}