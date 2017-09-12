#include<stdio.h>
int main()
{
 int option,a,b,c;
 printf(" \n SELECT YOUR OPERATION ");
 printf(" 1. ADD \n 2. SUB \n 3. FACTORIAL \n 4. POWER \n 5. LOG ");
 scanf("%d,&option);
 switch(option)
 {
 case 1 : printf("Enter the numbers ");
          scanf("%d,%d",&a,&b);
          c=add(a,b);
          printf("\n %d",c);
 case 2 : printf("Enter the numbers ");
          scanf("%d,%d",&a,&b);
          c=sub(a,b);
          printf("\n %d",c);
 case 3 : printf("Enter the number ");
          scanf("%d",&a);
          c=factorial(a);
          printf("\n %d",c);
 case 4 : printf("Enter the numbers ");
          scanf("%d,%d",&a,&b);
          c=power(a,b);
          printf("\n %d",c);
 case 5 : printf("Enter the numbers ");
          scanf("%d",&a);
          c=log(a);
          printf("\n %d",c);
}
}
 
