// array sorting using functions and pointers
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
    sorting(a , n);
    printf("array after sorting\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t" , *(p+i));
    }
    return 0;
}
    void sorting(int *p1 , int n)
    {
        int temp;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(*(p1+i) > *(p1+j))
                {
                    temp = *(p1+i);
                    *(p1+i) = *(p1+j);
                    *(p1+j) = temp;
                }
            }
        }
    }
