#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define ERROR_FILE_OPEN -3
void main() {
    int n; //  количество чисел.
    scanf("%d", &n);
    int a[n];
    int c; // ограничитель.
    scanf("%d", &c);
    int number = 0;

    FILE *input = NULL;// открываем файл.
    input = fopen("input.bin", "rb");

    if (input == NULL) {
        printf("Error opening file");
        getch();
        exit(ERROR_FILE_OPEN);
    }
    int tmp = 0;
    printf("Good numbers:\n");
    for(int i = 0; i < n; ++i){
        fread(&number, sizeof(int), 1, input);
        if(number < c){
            printf("%d ", number);
        }
        else{
            a[tmp] = number;
            ++tmp;

        }
    }

    printf("\n");
    printf("Bad numbers:\n");
    for(int i = 0; i < tmp; ++i){
        printf("%d ", a[i]);
    }
    fclose(input);
}
