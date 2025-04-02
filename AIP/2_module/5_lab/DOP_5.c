#include <math.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main(){
    system("chcp 1251");
    system("cls");
    printf("Введите размеры массивов, введеные в файлах:\n");
    int n, m;
    scanf("%d %d", &n, &m);
    FILE *S1, *S2, *S3, *S4;
    S1 = fopen("S1.txt", "r");
    S2 = fopen("S2.txt", "r");
    S3 = fopen("S3.txt", "w");
    S4 = fopen("S4.txt", "w");
    //Сумма и разность.
    int e1, e2;
    fprintf(S3, "Сумма A и B:\n");
    fprintf(S4, "Разность A и B:\n");
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            fscanf(S1, "%d", &e1);
            fscanf(S2, "%d", &e2);
            fprintf(S3, "%d ", e1+e2);
            fprintf(S4, "%d ", e1-e2);
        }
        fprintf(S3, "\n");
        fprintf(S4, "\n");
    }

    fclose(S1);
    fclose(S2);
    fclose(S3);
    fclose(S4);
    return 0;
}
