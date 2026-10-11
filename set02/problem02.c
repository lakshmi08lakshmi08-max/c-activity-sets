/*WAP to add three fraction*/
#include <stdio.h>
struct fraction {int n, d;};
typedef struct fraction F;
F input()
{F f; 
printf("Enter the numerator and denominator: ");
scanf("%d%d",&f.n, &f.d);
if (f.d == 0)
{ printf("Error! Denominator cannot be zero.\n"); }
return f;
}
F add(F f1, F f2)
{F r;
r.d = f1.d * f2.d;
r.n = f1.n * f2.d + f2.n * f1.d;
return r;
}
void output(F f1, F f2,F f3 ,F r)
{printf("The sum of %d/%d + %d/%d + %d/%d is %d/%d\n",f1.n, f1.d,f2.n, f2.d,f3.n ,f3.d,r.n, r.d);
}
int main()
{F f1, f2,f3,r ,t;
f1 = input();
f2 = input();
f3 = input ();
t = add(f1,f2);
r = add(t,f3);
output(f1,f2,f3,r);
return 0;
}
