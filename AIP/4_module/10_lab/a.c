#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define ERROR_FILE_OPEN -3

void main(){

    // ��������� ����, �� �������� ����� ������.
    FILE *input = NULL;
    input = fopen("input.bin", "wb+");
    if(input == NULL){
        printf("Error opening the file.\nType any key to try again.\n");
        getchar();
        input = fopen("input.bin", "wb+");
        if(input == NULL){
            printf("Ne povezlo..");
            return 0;
        }
    }

    // ����������� ���������� �����.
    printf("Input count of numbers.\n");
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("N isn't correct ( < 0 )");
        return 0;
    }
    else if(n == 0){
        return 0;
    }

    // �������� �������� � ������� � ����.
    double maxx=-1e+9;
    double nmb;
    int cnt_pos = 0;
    for(int i=0; i<n; ++i){
        scanf("%lf", &nmb);
        if(nmb > 0){
            cnt_pos ++;
        }
        if(maxx <= nmb){
            maxx = nmb;
        }
        fwrite(&nmb, sizeof(double), 1, input);
    }

    // ���������� ��������� � ����� �����.
    for(int i = 0; i < cnt_pos; ++i){
        fwrite(&maxx, sizeof(double), 1, input);
    }
    rewind(input);

    // ������� ���������
    double res;
    for(int i = 0; i < n + cnt_pos; ++i){
        fread(&res, sizeof(double), 1, input);
        printf("%lf ", res);
    }

    fclose(input);
}



