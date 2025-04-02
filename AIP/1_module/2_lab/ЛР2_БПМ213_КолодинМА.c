#include <stdio.h>
#include <math.h>
const double eps = 1e-9;
int eq(double a, double b) {
   return a < b + eps && a > b - eps; // ф-я, вычисляющая будет ли a равно b. С погрешностью eps.
}
int ls(double a, double b) {
   return a < b - eps; // ф-я, вычисляющая будет ли a меньше  b.С погрешностью eps.
}

int lseq(double a, double b) {
   return a < b + eps; // ф-я, вычисляющая будет ли a меньше или равно b.С погрешностью eps.
}
int f(double x, double y){
    return ((y >= -1 && lseq(y, -3 * x + 2)  && lseq(y, 3 * x + 2))); // вычисляет пренадлежность точки заданному пространству.
}
main(){
    double x, y;
    printf("Input x and y:\n");
    scanf("%lf", &x); scanf("%lf", &y);

    // Вычислим ф-ии - получим y=-3x+2, y=3x+2, y=-1;
    // 1 способ:

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

    //2 способ:

    if( y >= -1 && lseq(y, -3 * x + 2) && lseq(y, 3 * x + 2)){
        printf("Point intersect the area\n");

    }
    else{
        printf("Point doesn't intersect the area\n");

    }

    //3 способ:

    if(f(x, y) !=0 ){
        printf("Point intersect the area");
        return 0;
    }
    else{
        printf("Point doesn't intersect the area");
        return 0;
    }


}
