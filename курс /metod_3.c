#include <stdio.h> 
#include <math.h> 
 
double f(double, double , double ); 
 
int main ( )  
{ 
 double x, x1, x2, epsilon, otv=0, y, c, d; 
  
 printf ("введите интервал от xn-1 до xn\n"); 
 printf ("введите xn: "); 
 scanf ("%lf", &x1); 
 printf ("введите xn-1: "); 
 scanf ("%lf", &x2); 
 printf ("введите точность вычислений: "); 
 scanf ("%lf", &epsilon); 
 printf ("введите c: "); 
 scanf ("%lf", &c); 
 printf ("введите d: "); 
 scanf ("%lf", &d); 
  
  
 do { 
   y=otv; 
   otv=x2-((x2-x1)/(f(x2,c,d)-f(x1,c,d)))*f(x2,c,d); 
   x1=x2; 
   x2=otv; 
 } 
 while (fabs(y-otv)>=epsilon); 
  
 printf ("Ответ: %lf\n", otv); 
 return 0; 
} 
  
double f(double x, double c, double d) 
{ 
 return sin(c*x)-d; 
}
