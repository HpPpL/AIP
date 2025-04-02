#include <stdio.h>
#include <math.h>
const double eps = 1e-9;
int eq(double a, double b) {
   return a < b + eps && a > b - eps; // �-�, ����������� ����� �� a ����� b. � ������������ eps.
}
int ls(double a, double b) {
   return a < b - eps; // �-�, ����������� ����� �� a ������  b.� ������������ eps.
}

int lseq(double a, double b) {
   return a < b + eps; // �-�, ����������� ����� �� a ������ ��� ����� b.� ������������ eps.
}
int f(double x, double y){
    return ((y >= -1 && lseq(y, -3 * x + 2)  && lseq(y, 3 * x + 2))); // ��������� �������������� ����� ��������� ������������.
}
main(){
    double x, y;
    printf("Input x and y:\n");
    scanf("%lf", &x); scanf("%lf", &y);

    // �������� �-�� - ������� y=-3x+2, y=3x+2, y=-1;
    // 1 ������:

    if(y >= -1){
        if(lseq(y, -3 * x + 2)){
            if(lseq(y, 3 * x + 2)){
                printf("Point intersect the area\n");
                }
            else{
                printf("Point doesn't intersect the area\n");

            }
        }
         else{
            printf("Point doesn't intersect the area\n");

        }
    }
    else{
        printf("Point doesn't intersect the area\n");

    }

    //2 ������:

    if( y >= -1 && lseq(y, -3 * x + 2) && lseq(y, 3 * x + 2)){
        printf("Point intersect the area\n");

    }
    else{
        printf("Point doesn't intersect the area\n");

    }

    //3 ������:

    if(f(x, y) !=0 ){
        printf("Point intersect the area");
        return 0;
    }
    else{
        printf("Point doesn't intersect the area");
        return 0;
    }


}
