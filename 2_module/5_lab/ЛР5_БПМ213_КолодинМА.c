#include <math.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void inp(int a[][10], int m, int n){ // 1. ��������� ������.
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            scanf("%d", &a[i][j]);
        }
    }
}
void outp(int a[][10], int m, int n){ // 2. ������� ������.
    printf("\n");
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void clc(int a[][10], int m, int n){// 3. �������������� �����.
    int minn = pow(2,31) - 1;
    for(int i = m - 1; i >= 0; --i){ // �������� ��������� ��� m x n �� ������ ������� ���� ����.
        for(int j = 0; j < n; ++j){
            if(a[i][j] < 0){
                if(a[i][(m-1)-i] % 2 == 0  && (m-1)-i < n){
                    printf("%d is even.  \n", a[i][(m-1)-i]);
                    if(a[i][(m-1)-i] <= minn){
                        minn = a[i][(m-1)-i];
                    }
                }
            }
        }
    }
    if(minn == pow(2,31) - 1){
        printf("Number doesn't exist");
    }
    else{

        printf("Result: %d", minn);
    }
}
int main(){
    int m, n;
    printf("Input m and n:\n");
    scanf("%d %d", &m, &n);
    int a[m][10];

    // 1. ��������� ������.
    inp(a, m, n);
    // 2. ������� ������.
    outp(a, m, n);
    // 3. �������������� �����.
    clc(a, m, n);

}
