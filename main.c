#include<stdio.h>
#include<math.h>
#include"add.c"
#include"sub.c"
#include"factorial.c"
#include"power.c"
#include"log.c"
int main()
{
 int option,a,b,c;
 double x,ans,y;
 printf(" \n SELECT YOUR OPERATION \n ");
 printf("1. ADD \n 2. SUB \n 3. FACTORIAL \n 4. POWER \n 5. LOG \n ");
 scanf("%d",&option);
 switch(option)
 {
 case 1 : printf("Enter the numbers ");
          scanf("%d %d",&a,&b);
          c=add(a,b);
          printf("\nThe sum of %d and %d is %d\n",a,b,c);
	  break;
 case 2 : printf("Enter the numbers ");
          scanf("%d %d",&a,&b);
          c=sub(a,b);
          printf("\nThe difference of %d and %d is %d\n",a,b,c);
	  break;
 case 3 : printf("Enter the number ");
          scanf("%d",&a);
          c=factorial(a);
          printf("\nThe Factorial of %d is %d\n",a,c);
	  break;
 case 4 : printf("Enter the numbers ");
          scanf("%lf %lf",&x,&y);
          ans=power(x,y);
          printf("\n%lf to the power of %lf is %lf\n",x,y,ans);
	  break;
 case 5 : printf("Enter the numbers ");
          scanf("%lf",&x);
          ans=logarithm(x);
          printf("\nlog of %lf is %lf\n",x,ans);
	  break;
}
}
 
