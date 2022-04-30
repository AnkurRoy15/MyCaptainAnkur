#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, result;
 
    printf("Input number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits: %d ",result);
    return 0;
}
 
int sum (int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
       return (num % 10 + sum (num / 10));
    }
}