#include<stdio.h>
int swap(int*, int*);
struct A
{
    int x;
    float grade;
    char name[20];
    int u, i;
};
int main()
{
    printf("Hello World..!!\n");
    struct A k;
    printf("Enter student grade: ");
    scanf("%f", &k.grade);
    printf("Enter the student number: ");
    scanf("%d", &k.x);
    printf("Enter the student name: ");
    scanf("%s", &k.name);
    printf("Enter two numbers to get swapped: ");
    scanf("%d %d", &k.u, &k.i);
    //k.x = 10;
    printf("The student grades are: %.2f \n", k.grade);
    printf("The student roll number is: %d \n", k.x);
    printf("The student name is: %s \n", k.name);
    //printf("Enter the two numbers to swapped: ");
    //scanf("%d %d \n", k.u, k.i);
    printf("Before swapping two entered numbers: %d %d \n", k.u, k.i);
    swap(&k.u, &k.i);
    printf("After swapping two entered numbers: %d %d \n", k.u, k.i);
    int m = 90; int n = 80;
    printf("Numbers before swapping: %d %d \n", m, n);
    swap(&m, &n);
    printf("Numbers after swapping: %d %d \n", m, n);
    printf("\n \n \n");
}

int swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return *a, *b;
}
