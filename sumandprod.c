// return sum and product of two numbers
#include<stdio.h>
void swap(int *x , int *y , int *s , int *p);
int main()
{
    int a , b;
    printf("enter two numbers\n");
    scanf("%d %d" , &a , &b);
    printf("original numbers\n");
    printf("a = %d , b = %d \n" , a , b);
    int sum , prod;
    swap(&a , &b , &sum , &prod);

    printf("sum = %d , product = %d" , sum , prod);
    return 0;
}
    void swap(int *x , int *y , int *s , int *p)
{
  *s = *x + *y;
  *p = *x * *y;
}
    
    
    
    
    
