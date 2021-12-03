#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int NOD(int a, int b)
{
  int div;//остаток от деления
  if (a == b)   // если числа равны, НОД найден
    return a;
  int d = a - b; // Находим разность чисел
  if (d < 0)       // если разность отрицательная,
  {
    d = -d;     // меняем знак
    div = NOD(a, d); // вызываем функцию NOD() для двух наименьших чисел
  }
  else      // если разность n1-n2 положительная
  {
    div = NOD(b, d); // вызываем функцию NOD() для двух наименьших чисел
  }
  return div;
}

int NOK(int a, int b) {
    return (abs(a * b) / NOD(a, b));
}


int recursive_sum(int x) {
    if (x == 0) {
        return 0;
    }
    return x % 10 + recursive_sum(x / 10);
}

int main(){
    
    printf("=== Task 1 ===\n");

    int a, b;
    printf("Input two any integer numbers: ");
    scanf("%d%d", &a, &b);

    printf("NOD of your numbers: %d\n", NOD(a, b));
    printf("NOK of your numbers: %d\n\n", NOK(a, b));
    
    
    printf("\n\n === Task 2 ===\n");

    int x;
    printf("Input your number: ");
    scanf("%d", &x);
    printf("Your answer: %d\n", recursive_sum(x));

    return 0;
    }
