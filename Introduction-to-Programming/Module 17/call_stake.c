#include<stdio.h>
void num2()
{
  printf("Arafath\n");
}
void num1()
{
  printf("Riyad\n");
  num2();
}
int main()
{
    printf("Rakib\n");
    num1(); 
    return 0;
}