// search an element in the array using pointers
#include<stdio.h>
int search(int * , int , int);
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
    int ele;
    printf("enter element to search\n");
    scanf("%d" , &ele);
    int k = search(a , n , ele);
    if(k==1)
    printf("element found");
    else
    printf("not found");
    return 0;
}
int search(int *p , int n , int ele)
{
    int f = 0;
    for(int i=0; i<n; i++)
    {
        if(ele == *(p+i))
    {
        f = 1;
        break;
    }
    }
    if(f==1)
    return 1;
    else
    return 0;
}
    