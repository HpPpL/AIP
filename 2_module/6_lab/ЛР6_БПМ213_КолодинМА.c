#include <math.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void del(double *a, int ind_el, int n){
    int b;
    for(int i = ind_el; i < n-1; ++i){
        a[i]=a[i+1];
    }
}
int main(){
    double *a; // ��������� �� ������ �������.
    int n, i;
    printf("Intput array size:\n");
    scanf("%d", &n);

    // �������� ������.
    a = (double*)malloc(n * sizeof(double));

    // ������ ��������������� ������. � ����� ������� ����� ������� ������������� �������
    printf("Input array:\n");
    int pst=-1;
    for (i = 0; i < n; ++i){
        scanf("%lf", &a[i]);
        if(a[i] < 0 && pst==-1){
            pst = i;
        }
    }
    if(pst==-1){
        printf("Result:\n");
        for (i = 0; i < n; ++i){
            printf("%lf ", a[i]);
        }
        return 0;
    }

    // �������� ������ - ������� ��� ��������, ������� ���� � ������������� ����� ������� ��������������.
    for (i = pst + 1; i < n; ++i){
        if(a[i] < 5){
            del(a, i, n);
            n-=1;
            a = (double*)realloc(a, n * sizeof(double));
            --i; // ����� ������������� �������, ������� �������� � i.
        }

    }

    //Final part)
    printf("Result:\n");
    for (i = 0; i < n; ++i){
        printf("%lf ", a[i]);
    }
    free(a);
}
