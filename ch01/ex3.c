/* Modify the temperature conversion program to print a
heading above the table. */
#include <stdio.h>

int main()
{
 float fahr, celsius; /* we fixed this */
 float lower, upper, step; /* we fixed this */
 lower = 0;
 upper = 300;
 step = 20;

 fahr = lower;
 printf("Fahreneit Celsius\n");
 while(fahr <= upper) {
   celsius = (5.0/9.0) * (fahr-32.0); /* we fixed this */
   printf("%7.0f %9.1f\n", fahr, celsius);
   fahr = fahr + step;
 }
}
