// find max element in the array using pointers
#include<stdio.h>
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
    int max = 0;
    for(i=0; i<n; i++)
    {
        if(max < *(p+i))
        max = *(p+i);
    }
    printf("max value = %d" , max);
    return 0;
}
    
