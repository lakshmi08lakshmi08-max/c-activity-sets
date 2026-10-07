\*WAP to find the area of the circle*/
\*In my next prg I am going to use struct and function*/

#include <stdio.h>
int main() 
{ 
float r, a;
printf("Enter the radius:") ;
scanf("%.2f", &r) ;
a =(float) (3.14*r*r) ;
printf("Area:%.2f", a) ;
}