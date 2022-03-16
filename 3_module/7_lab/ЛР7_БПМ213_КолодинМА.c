#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
int main(){

    // Ввод.
    int n = 0;
    int lp = 0;
    char st[360]; // 30 - максимум слов. 12 символов на слово, так как до 10 - слово, 1 - запятая / точка, 1 - ноль строчки).
    printf("Input string:\n");
    gets(st);
    for(int i = 0; st[i] != '\0'; ++i){
        if(st[i] == ',' || st[i] == '.'){
            ++n;
            for(int j = lp; j < i; ++j){
                if(st[j] >=  48 && st[j] <= 57){
                }
                else if(st[j] >= 65 && st[j] <= 90){
                }
                else if(st[j] >= 97 && st[j] <= 122){
                }
                else{
                    printf("Incorrect symbol - %c, pos - %d \n", st[j], j);
                }
            }
            lp = i+1;
        }
    }
    if(n > 30){
        printf("Too many words, error(");
        return 0;
    }
    else{
        printf("Number of words - %d \n", n);
    }
    char a[n][12]; // массив строк a отвечает за разбиение исходной строки пословно. Делал задачу до знания strtok.

    // Первичная обработка.
    int pos=0, k=0, tmp=0;
    for(int i = 0; st[i] != '\0'; ++i){
        if(st[i] == ','){
            for(int j = pos; j < i; ++j){
                a[k][tmp] = st[j];
                tmp++;
            }
            a[k][tmp] = '\0'; // - это очень важно при посимвольной инициализации строки. Конец строки)
            k++;
            tmp = 0;
            pos = i + 1;
        }
        if(st[i] == '.'){
            for(int j = pos; j < i; ++j){
                a[k][tmp] = st[j];
                tmp++;
            }
            a[k][tmp] = '\0'; // - это очень важно при посимвольной инициализации строки. Конец строки)
            break;
        }
    }

    // Вычислительная часть.
    int flg = -1;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(strcmp(a[i],a[j]) == 0){
                flg = 1;
                a[j][0] = '\0'; // Выкидываем строчку, которая повторяется.
            }
            if(flg == 1 && j == n-1){
                a[i][0] = '\0';
            }
        }
        flg = -1;
    }

    // Вывод.
    printf("Result:\n");
    for(int i=0; i<n; ++i){
        if(a[i][0]!='\0'){
            printf("%s ",a[i]);
        }
    }
}
