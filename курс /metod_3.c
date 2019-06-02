#include <stdio.h> 
#include <math.h> 

double f(double, double , double ); 

int main ( ) 
{ 
double a, b, otv=0, y, c, d, epsilon; 
int k=0;
printf ("введите интервал от a до b \n"); 
printf ("введите a : "); 
scanf ("%lf", &a); 
printf ("введите b: "); 
scanf ("%lf", &b); 
printf ("введите точность вычислений: "); 
scanf ("%lf", &epsilon);
printf ("введите с(констатнта при икс): "); 
scanf ("%lf", &c); 
printf ("введите значение положения функции по y : "); 
scanf ("%lf", &d);
printf ("\n\n\nКоличество интераций и значение по х\n\n\n"); 
printf ("________________\n\n");

do { 
y=otv; 
otv=b-((b-a)/(f(b,c,d)-f(a,c,d)))*f(b,c,d); 
a=b; 
b=otv; 
k++;
printf("%d) %lf\n\n", k, otv);
// printf ("Ответ: %lf\n Количество интераций %d\n", otv, k); 
} 
while (fabs(y-otv)>=epsilon); 
printf ("________________\n"); 
printf ("    Ответ: x = %lf\n"
        "При итерации = %d\n", otv, k); 
return 0; 
} 

double f(double x, double c, double d) 
{ 
return sin(c*x)-d; 
}















______________________________________________________________
______________________________________________________________
______________________________________________________________






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
