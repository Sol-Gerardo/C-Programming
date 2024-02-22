#include <stdio.h>

/** print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 300; floating-point version */
int main () {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    printf("%3s %6s\n", "Fahrenheit", "Celsius");
    fahr = lower;
    while(celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%6.0f %9.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
}
