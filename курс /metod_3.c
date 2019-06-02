// подключение библиотек
// стандартный заголовочный файл ввода-вывода
#include <stdio.h>
// математическая библиотека
#include <math.h> 
// объявление функции f в ней мы выводим наше уравнение
double f(double, double , double ); 
// объявление главной функции
int main ( ) 
{ 
// объявление переменных типа double 
double a, b, otv=0, y, c, d, epsilon; 
// объявление переменной типа int (счётчик итераций)
int k=0;
// вывод текста на экран     
printf ("введите интервал от a до b \n"); 
printf ("введите a : "); 
// ввод значения а
scanf ("%lf", &a); 
printf ("введите b: ");
// ввод значения b
scanf ("%lf", &b); 
printf ("введите точность вычислений: "); 
// ввод значения epsilon
scanf ("%lf", &epsilon);
printf ("введите с(констатнта при икс): ");
// ввод значения c
scanf ("%lf", &c); 
printf ("введите значение положения функции по y : "); 
// ввод значения d
scanf ("%lf", &d);
// вывод текста на экран
printf ("\n\n\nКоличество интераций и значение по х\n\n\n"); 
// перенос каретки на следующую строку
printf ("________________\n\n");
// цикл с предусловием
do { 
// приравнивание переменнной y значение otv
y=otv; 
//приравнивание переменнной otv выражение 
otv=b-((b-a)/(f(b,c,d)-f(a,c,d)))*f(b,c,d); 
// приравнивание переменнной a значение b
a=b; 
// приравнивание переменнной b значение otv
b=otv; 
// постинкремент (счётчик итераций)
k++;
// вывод на экран значений k и otv
printf("%d) %lf\n\n", k, otv); 
} 
// пока y-otv по модулю больше или равно epsilon
while (fabs(y-otv)>=epsilon); 
// перенос каретки на следующую строку
printf ("________________\n"); 
// вывод на экран значений otv и k
printf ("    Ответ: x = %lf\n"
        "При итерации = %d\n", otv, k); 
// успешное выполнение программы
return 0; 
} 
// объявление функции f 
double f(double x, double c, double d) 
{ 
// вывод уравнения 
return sin(c*x)-d; 
}

































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
