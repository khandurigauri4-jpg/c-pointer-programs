// swapping two numbers by pointers
#include<stdio.h>
void swap(int *x , int *y);
int main()
{
    int a , b;
    printf("enter two numbers\n");
    scanf("%d %d" , &a , &b);
    printf("original numbers\n");
    printf("a = %d , b = %d \n" , a , b);
    swap(&a , &b);
    printf("values after swapping \n");
    printf("a = %d , b = %d" , a , b);
    return 0;
}
    void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
    
    
    
    
    
