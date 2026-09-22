\\WAP to find square root of a number 


#include <stdio.h>
#include <math.h>

int main()
{
    float a, g, n;
    printf("Enter a number: ");
    scanf("%f", &a);
  if (a<0) 
  {printf(" invalid") ;
    }
  {
    g = a/ 2;
  float x =  (g + a/n)/2;
  
  while( fabs(g- n) > 0.00001 )
  {   g = n;
    n = (g + a/g)/2;
  }
  
    printf("Square root of%.2f= %.5f", a, g);
  }
    return 0;
}
}
