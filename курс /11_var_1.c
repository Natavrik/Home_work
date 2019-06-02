// подключение библиотек
//стандартный заголовочный файл ввода-вывода
#include<stdio.h>
// математическая библиотека
#include<math.h>
// объявление константы числа Пи
#define PI 3.1415926535897
//прототип функции seriesTg 
int seriesTg(double, double, double*);
//прототип функции compute для вычисления цепной дроби
double compute(int, double);
// главная функция main ()
           int main()
       {
// объявление переменных типа double
           double x, epsilon, result;
           printf ("Введите x: ");
// ввод значения x
           scanf ("%lf", &x);
           printf ("Введите epsilon: ");
// ввод значения epsilon
           scanf ("%lf", &epsilon);
		   printf("\n\n");
// вызов функции seriesTg
          seriesTg (x,epsilon,&result);
// вывод на экран значения epsilon, tan(x), result для сравнения при заданной точности
  printf ("\n" //перенос каретки на следующую строку
          "   Точность вычислений: %15.10lf\n"
          "           Левая часть: %15.10lf\n"
          "          Правая часть: %15.10lf\n", epsilon, tan(x), result);
// успешное выполнение программы
          return 0;
      }
// объявление функции seriesTg
int seriesTg (double x, double epsilon, double *result)
{
// объявление переменной типа int - счётчик интераций 
  int n = 1;
// объявление переменных left и right типа double и присваивание им значений
  double left = tan(x);
  double right = 1;
// цикл пока модуль левой части минус правая часть уравнения больше или равна заданной точности
       while (fabs (left - right) >= epsilon )
       {
// если условие выполняется, то правой части присваивается значение функции compute (n, x)
        right = compute(n, x);
// постинкремент счётчика интераций
        n++;
/* вывод на экран значений для проверки количества интераций, 
необходимых для заданной точности и вывод ряда в зависимости от х*/
       printf ("       %d) х=%10.6lf\n", n-1, right); 
       }
//перенос каретки на следующую строку
   printf("\n\n");
// присваивание переменной right к result 
  *result = right;
// возврат значения n
  return n;
}
// объявление функции compute 
double compute (int n, double x)
{
// объявление переменных k и result типа double 
   double k, result = 0;
// цикл пока член ряда n больше нуля выполняем
     while (n > 0)
     {
// присваиваем переменной k выражение 
       k = n*2-1;
// присваиваем переменной result выражение подсчёта цепной дроби
       result = 1.0/(k/x-result);
//  прединкремент
       --n;
     }
// возврат значения result 
  return result;
}


























_____________________________________________________________________________________________
_____________________________________________________________________________________________



// подключение библиотек
//стандартный заголовочный файл ввода-вывода
#include<stdio.h>
// математическая библиотека
#include<math.h>
// объявление константы числа Пи
#define PI 3.1415926535897
//прототип функции seriesTg
int seriesTg(double, double, double*);
//прототип функции compute
double compute(int, double);
// главная функция main ()
           int main()
       {
// объявление переменных типа double
           double x, epsilon, result;
           printf ("Введите x: ");
// ввод значения x
           scanf ("%lf", &x);
           printf ("Введите epsilon: ");
// ввод значения epsilon
           scanf ("%lf", &epsilon);
// вызов функции seriesTg
          seriesTg (x,epsilon,&result);
// вывод на экран значения epsilon, tan(x), result для сравнения при заданной точности
  printf ("Epsilon: %25.20lf\nTg: %30.20lf\nResult: %26.20lf\n", epsilon, tan(x), result);
// успешное выполнение программы
          return 0;
        }
// объявление функции seriesTg
int seriesTg (double x, double epsilon, double *result)
{
// объявление переменной типа int  
  int n = 1;
// объявление переменных left и right типа double и присваивание им значений
  double left = tan(x);
  double right = 1;
// цикл пока модуль левой части минус правая часть уравнения меньше заданной точности
  while (fabs (left - right) >= epsilon ){
// если условие выполняется, то правой части присваивается значение функции compute (n, x)
    right = compute(n, x);
// постинкремент
    n++;
// вывод на экран значений для проверки количества интераций, необходимых для заданной точности
    printf (“Член ряда: %d\nВывод ряда в зависимости от х: %lf\n”, n-1, right); 
}

// присваивание переменной right к result 
  *result = right;
// возврат значения n
  return n;
}
// объявление функции compute 
double compute (int n, double x)
{
// объявление переменных k и result типа double 
  double k, result = 0;
// цикл пока член ряда n больше нуля выполняем
  while (n > 0) {
// присваиваем переменной k выражение 
    k = n*2-1;
// присваиваем переменной result выражение подсчёта цепной дроби
    result = 1.0/(k/x-result);
//  прединкремент
    --n;
  }
// возврат значения result 
  return result;
}
