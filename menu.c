#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nEnter your number: \n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nFood Item-Pizza");
    printf("\nPrice- Rs 239");
    break;
  case 2:
    printf("\nFood Item-Burger");
    printf("\nPrice- Rs 129");
    break;
  case 3:
    printf("\nFood Item-Pasta");
    printf("\nPrice- Rs 179");
    break;
  case 4:
    printf("\nFood Item-French Fries");
    printf("\nPrice- Rs 99");
    break;
  case 5:
    printf("\nFood Item-Sandwich");
    printf("\nPrice- Rs 149");
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}