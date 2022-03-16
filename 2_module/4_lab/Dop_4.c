#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
int main(){
    // Ввод.
    int n;
    printf("Input quantities of words:\n");
    scanf("%d \n", &n);
    char a[n][12], st[360]; // n - слов. 12 символов на слово, так как до 10 - слово, 1 - запятая / точка, 1 - ноль строчки).
    gets(st);

    // Первичная обработка.
    int pos=0, k=0, tmp=0;
    for(int i = 0; st[i] != '\0'; ++i){
        if(st[i] == ','){
            for(int j = pos; j < i; ++j){
                a[k][tmp] = st[j];
                tmp++;
            }
            a[k][tmp] = '\0';
            k++;
            tmp = 0;
            pos = i + 1;
        } // adks,sadasda,sadas. // asdasd,asddas,dgfgs,sdf,asdasd. // asdasd,asddas,dgfgs,sdf,asdasasd. // asd,xzcxzc,asdasf,gfdgdfg.
        if(st[i] == '.'){
            for(int j = pos; j < i; ++j){
                a[k][tmp] = st[j];
                tmp++;
            }
            a[k][tmp] = '\0';
            break;
        }
    }
    // Вычислительная часть.
    int cnt=1;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(strcmp(a[i],a[j]) == 0){
                a[j][0] = '\0'; // Выкидываем строчку, которая повторяется.
                cnt++;
            }
        }
        if(a[i][0]!='\0'){
            printf("%s ",a[i]);
            for(int i=0; i<cnt; ++i){
                printf("*");
            }
            printf("\n");
        }
        cnt=1;
    }

}
