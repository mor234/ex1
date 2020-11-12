#include <stdio.h>
#include "myMath.h"
double Exponent(int x)
{
    #define E 2.7182818;
    double e=E;
    return Power (e,x);
} //אקספוננט
double Power(double x , int y)
{
  if (x==0&& y==0)
  {
      printf("ERROR. 0 power 0 is not defined");
      return 0;
  }
    double ans=1;
    int posY=y;//positive value of y
    if (posY<0)
        posY*=-1; 
   
        int i=0;
        while (i<posY)
        {
             ans*=x;
             i++;
        }
        if (y<0)
        {
            return 1/ans;
        }
        else
        {
            return ans;
        }
    
}

 //power with a בסיס שבר 