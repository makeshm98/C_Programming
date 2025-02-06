#include<stdio.h>
int swap(int* , int*);
int main()
{
    printf("Hello World..!! \n");
    printf("\n\n");
    int a[5] = {5, 7, 3, 2, 9};
    for(int i = 0; i < 5; i++)
    {
        printf("The array elements are: %d\n", a[i]);
    }
    printf("\n\n");
    int t[5];
    for(int i = 0; i < 5; i++)
    {
        t[i] = a[5 - i - 1];
        printf("The array elements in reverse order is: %d\n", t[i]);
    }
    printf("\n\n");
    int m = 90; int n = 80;
    printf("The array elements before swapping is: %d %d", m, n);
    printf("\n\n");
    swap(&m, &n);
    printf("The array elements after swapping is: %d %d", m, n);
    printf("\n\n");
}

int swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return *a, *b;
}
