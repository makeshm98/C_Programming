#include<stdio.h>
int temp[5];
int number;
int swap(int *m, int *n);
int main()
{
    printf("Hello World\n");
    int a[5] = {7, 8, 6, 4, 9};
    for(int i = 0; i < 5; i++)
    {
        printf("The array elements are: %d\n", a[i]);
    }
    printf("\n\n\n");
    for(int k = 0; k < 5; k++)
    {
        temp[k] = a[5 - k - 1];
    }
    for(int l = 0; l < 5; l++)
    {
        printf("The array in reverse order is: %d\n", temp[l]);
    }
    printf("\n\n\n");
    printf("Enter the number to find the week day:");
    scanf("%d", &number);
    switch(number)
    {
        case 1:
        printf("You selected monday..!");
        break;
        case 2:
        printf("You selected tuesday..!");
        break;
        case 3:
        printf("You selected wednesday..!");
        break;
        case 4:
        printf("You selected thursday..!");
        break;
        case 5:
        printf("You selected friday..!");
        break;
        case 6:
        printf("You selected saturday..!");
        break;
        case 7:
        printf("You selected sunday..!");
        break;
        
        default:
        printf("You entered an wrong day number");
        break;
    }
    printf("\n\n\n");
    int m = 90; int n = 80;
    printf("The numbers before swapping is: %d %d\n", m, n);
    swap(&m, &n);
    printf("The numbers after swapping is: %d %d\n", m, n);
}

int swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
    return *a, *b;
}
