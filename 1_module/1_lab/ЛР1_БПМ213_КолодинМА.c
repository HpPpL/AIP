#include <stdio.h>
#include <math.h>
int main(){

    const double pi = 3.1415926535;
    //M_PI; - ��������� �� math.h
    int x, y;
    double z, a, b;
    // ���� ���������� �� ������� / ������ �������.
    printf("Input x, y and z: \n");
    scanf("%d", &x); scanf("%d", &y); scanf("%lf", &z);  // ���� x, y ,z.
    printf("x - "); printf("%10o\n", x); // x - � ���������.
    printf("y - "); printf("%10x\n", y); // y - � ����.
    printf("z - "); printf("%10.5e\n", z); // z -� ����. , 5 ������.

    a = 3 * sin(y - pi / 3) / (2 + pow(cos(x),2)) + cbrt(2 * x);
    b = pow(sin(pow(cos((z + y)) + 1, 1.0 / 2)), 2);

    printf("a - "); printf("%10.4lf\n", a); // ���� b.
    printf("b - "); printf("%10.4lf\n", b); // ����� b.
}
