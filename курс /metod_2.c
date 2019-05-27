// подключение библиотек 
// стандартный заголовочный файл ввода-вывода 
#include <stdio.h> 
// математическая библиотека 
#include <math.h> 
// объявление константы 
#define DELTA 1e-2 

// прототип функции f - функция 
double f(double, double, double ); 
// прототип функции root - поиск корня 
double root (double, double, double, double ); 
// прототип функции derivative - производная 
double derivative (double, double, double ); 
// главная функция main () 
int main (){ 
// объявление переменных типа double 
double x=0, epsilon, xn, c, d; 
printf ("введите точность: "); 
// ввод значения epsilon 
scanf ("%lf", &epsilon); 
// ввод значения c 
printf ("Введите с (изменение графика по х ): "); 
scanf("%lf",&c); 
// ввод значения d 
printf ("Введите d: "); 
scanf("%lf",&d); 
// вывод значения, которое возвращает функция root() 
printf ("%lf\n", root (x, epsilon,c,d)); 
// успешное выполнение программы 
return 0; 
} 

// объявление функции f - запись уравнения 
double f (double x, double c, double d) { 
//возврат значения функции 
return sin(c*x)-d; 
} 

// объявление функции root - считает корень 
double root (double x, double epsilon, double c, double d) { 
// объявляем переменную типа double 
double x1; 
// объявляем переменную k для подсчёта интераций 
int k=0; 
// цикл с предусловием 
do{ 
// цикл с предусловием 
do{ 
// присваивание переменной х1 значение х 
x1 = x; 
// присваиваем переменной х выражение последовательное приближение х корня 
x = x-(f(x,c,d)/derivative(x,c,d)); 
// постинкремент 
k++; 
// вывод на экран значений k, x, f(x, c, d) 
printf("%d)x=%lf f(x)= %.10lf\n",k,x,f(x,c,d)); 
} 
// пока абсолютное значение функции от аргумента х >= epsilon 
while(fabs(f(x,c,d))>=epsilon); 
// увеличиваем значение epsilon 
epsilon *= 0.01; 
}while(f(x,c,d)*f(x1,c,d)<0); 
// возврат значения x 
return x; 
} 

// объявление функции derivative - производная 
double derivative (double x, double c, double d){ 
// возврат значения derivitive 
return (f(x+DELTA,c,d)-f(x,c,d))/DELTA; 
}
