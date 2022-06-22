#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
double lagr(double x, int n, double *x_arr, double *y_arr);
int main()
{
    int n = 13;
    double x_arr[13] = { 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 74, 77, 79 };
    double y_arr[13] = { 0.686253258, 0.683077584, 0.683104677, 0.693074751, 0.731034864, 0.744812571, 0.686646883, 0.076853056, 0.0493061097, 0.596307424, 0.644390881, 0.680157869, 0.714669021 };
    // (x_arr,y_arr) - набор известных координат. ѕричем x - нечетное. ѕостараемс€ построить точки графика при четных x.
    for (double x = 55; x < 80; x += 1){
        printf("f(%lf) = %lf\n", x, lagr(x, n, x_arr, y_arr));
    }

    getchar();
    return 0;
}

double lagr(double x, int n, double *x_arr, double *y_arr){
    //ѕусть точки отсортированы по возрастанию координаты x

    if (n > 5)
        return (x <= x_arr[n/2]) ? lagr(x, (n + 1)/2, x_arr, y_arr) :
                                   lagr(x, (n + 1)/2, &x_arr[n/2], &y_arr[n/2]);

    double sum = 0;
    for (int i = 0; i < n; ++i){

        double l = 1;
        for (int j = 0; j < n; ++j)
            if (j != i)
                l *= (x - x_arr[j]) / (x_arr[i] - x_arr[j]);
        sum += y_arr[i] * l;
    }

    return sum;
}
