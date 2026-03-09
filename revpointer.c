// reverse an array using pointers
#include<stdio.h>
void sorting(int * , int);
int main()
{
    int n;
    printf("enter size \n");
    scanf("%d" , &n);
    int a[n];
    int *p = a;
    printf("enter array elements\n");
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d" , (p+i));
    }
    printf("array elements are\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t" , *(p+i));
    }
    printf("\n");
    int *start = a;
    int *end = a + (n-1);
    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("array after reversing\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t" , *(p+i));
    }
    return 0;
}
    