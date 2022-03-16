#include <math.h>
#include <stdio.h>
int main(){
    printf("Input k and x:\n");
    int k;
    double x;
    scanf("%d", &k);
    scanf("%lf", &x); // ввод k и x.

    // task 1.
    double a[k], c[k], max=-1, min;
    int fl=1;

    printf("Input massive:\n");
    for(int i = 0; i < k; ++i){
        scanf("%lf", &a[i]);
        c[i]=a[i];
        a[i]=fabs(a[i]); // вводим массив а - где числа берутся по модулю и массив c - так сказать, исходный массив.
        if(a[i] > max){
            max = a[i]; // можно сделать короче, но не знаю диапозон чисел. Ищем максимальное число по модулю в массиве.
        }
    }
    if(max < x){
        fl=-1; // проверяем, не случилось ли так, что мы будем искать такое число, которое будет больше максимального в массиве. Защита.
    }
    min = max;

    printf("\nResult for task 1:\n");
    printf("Massive (in absolute value):\n");
    for(int i = 0; i < k; ++i){
        printf("%lf ", a[i]);
        if( a[i] <= min && a[i] >= x){
            min = a[i]; // ищем необходимый элемент массива.
        }
    }
    printf("\n");

    printf("Minimum from massive, bigger than x:\n");
    if(fl == 1){
        printf("%lf\n", min); // если все хорошо)
    }
    else{
        printf("Number doesn't exist( \n"); // если не оч хорошо(
    }

    // task 2.
    printf("\nResult for task 2:\n");

    double sr, sr_sum=0;
    int klv=0;
    int pos_f=-1, pos_l = -1; //  я мог бы уменьшить количество вычислений, но пусть вы увидите, что я делал)

    printf("Massive: \n");
    for(int i = 0; i < k; ++i){ // вывод и поиск первого и последнего отрицательного элемента.
        printf("%lf ", c[i]);
        if(c[i] < 0 && pos_f != -1){
            pos_l=i;
        }
        if(c[i] < 0 && pos_f == -1){
            pos_f=i;
        }
    }
    printf("\n");
    if(pos_l == -1){
        printf("Incorrect situation - 0 or 1 negative numbers. Result = ? \n"); // если отрицательных чисел не более одного.
        return 0;
    }
    for(int i = pos_f+1; i < pos_l; ++i){
        sr_sum+=c[i];
        klv++; // считаем сумму чисел и их количество.
    }
    if(klv!=0){
        sr=sr_sum/klv;
    }

    printf("First negative number: %lf\n", c[pos_f]);
    printf("Second negative number: %lf\n", c[pos_l]);
    printf("Sum besides this members: %lf\n", sr_sum);
    printf("Amount of members: %d\n", klv);
    printf("Average: %lf\n", sr);
}
