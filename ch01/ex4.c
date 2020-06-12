/* Write a program to print the corresponding Celsius to
Fahrenheit table. */
#include <stdio.h>

int main()
{
 float fahr, celsius; /* we fixed this */
 float lower, upper, step; /* we fixed this */
 lower = 0;
 upper = 300;
 step = 20;

 celsius = lower;
 printf("Celsius Fahreneit\n");
 while(celsius <= upper) {
   fahr = ((9.0/5.0) * celsius) + 32.0; /* we fixed this */
   printf("%7.0f %9.1f\n", celsius, fahr);
   celsius = celsius + step;
 }
}
