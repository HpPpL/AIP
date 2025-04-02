#include <stdio.h>
#include <math.h>
int main(){

    const double pi = 3.1415926535;
    //M_PI; - константа из math.h
    int x, y;
    double z, a, b;
    // есть округление по верхней / нижней границе.
    printf("Input x, y and z: \n");
    scanf("%d", &x); scanf("%d", &y); scanf("%lf", &z);  // ввод x, y ,z.
    printf("x - "); printf("%10o\n", x); // x - в восьмерич.
    printf("y - "); printf("%10x\n", y); // y - в щест.
    printf("z - "); printf("%10.5e\n", z); // z -в эксп. , 5 знаков.

    a = 3 * sin(y - pi / 3) / (2 + pow(cos(x),2)) + cbrt(2 * x);
    b = pow(sin(pow(cos((z + y)) + 1, 1.0 / 2)), 2);

    printf("a - "); printf("%10.4lf\n", a); // ввод b.
    printf("b - "); printf("%10.4lf\n", b); // вывод b.
}
