#include<stdio.h>
int swap(int m, int n);
int swap_pointer(int *x, int *y);
int main()
{
    printf("Hello World\n");
    int a[5] = {5, 7, 8, 9, 3};
    for(int i = 0; i <= 4; i++)
    {
    printf("The array elements are: %d\n", a[i]);
    }
    printf("\n\n\n");
    for(int j = 0; j <=4; j++)
    {
    //a[j] = a[j+1];
    printf("The array elements in sorted way is: %d\n", a[j]);
    }
    printf("\n\n\n");
    int temp[5];
    for(int i =0; i <5; i++)
    {
        temp[i] = a[5-i-1];
    }
    for(int i = 0; i < 5; i++)
    {
        printf("The array in reversed order is: %d\n", temp[i]);
    }
    printf("\n\n\n");
    int q = 23;
    int *p;
    p = &q;
    printf("The pointer variable stored address is: %p\n", p);
    printf("The pointer value is: %d\n", *p);
    printf("\n\n\n");
    int m = 10;  int n = 90;
    swap(m, n);
    printf("After swapping without pointer: %d  %d \n", m, n);
    
    int t = 89; int u = 98;
    printf("Before swapping with pointers: %d %d \n", t, u);
    swap_pointer(&t, &u);
    printf("After swapping with pointers: %d %d", t, u);
}

int swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    return a, b;
}

int swap_pointer(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    return *x, *y;
}
