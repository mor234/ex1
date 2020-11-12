#include <stdio.h>
#include "myMath.h"
/*
the program accepet a real number from user, nd  coclute the following functions:
i. f(x) = e^x + 𝑥^3 − 2
ii. f(x) = 3x + 2X^2
iii. f(x) = (4x^3)/5 -2x 
*/
int main ()
{
 
    double x;
	printf("Please inset a real number: \n");
  if(scanf("%lf",&x)!=1)
   {
       printf("Error. Failed to get the number.\n");
       return -1;
   }
   //function 1: f(x) = e^x + 𝑥^3 − 2
   double f= add(Exponent(x),Power(x,3));
    f= sub(f,2);
    printf("The value of f(𝑥) = e^x + x^3 − 2 at the point %.4lf is: %.4lf\n", x, f);

   
   // function 2: f(x) = 3x + 2(X^2)
    f= mul(x,3);
    double coff =Power(x,2);
    f=add(f,mul(coff,2));
       printf("The value of f(𝑥) = 3x + 2(X^2) at the point %.4lf is: %.4lf\n", x, f);

    //function 3: f(x) = (4(x^3))/5 -2x

    f=  mul(Power(x,3),4);
    f=div(f,5);
    f=sub(f,mul(x,2));
   printf("The value of f(𝑥) = (4(x^3))/5 -2x at the point %.4lf is: %.4lf\n", x, f);


	return 0;
}