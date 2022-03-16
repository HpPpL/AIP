#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define DEBUG 2
#define lenght 20
#include "otdel.c"

void input();
void output();
void findstruct();

int n;
struct otdel db[lenght];
int flg = 1;

int main()
{
    system("chcp 1251");
    system("cls");

    input(); // ����.
    output(); // �����.
    if(flg != -1){
        findstruct(); // �����.
    }
}


void input()
{
    #if (DEBUG == 1)
    printf("������� ���������� �������:\n");
    scanf("%d", &n);
    if(n <= 0){
        printf("��������� ��������:\n");
        printf("������� ���(");
        flg = -1;
        return 0;
    }
    for(int i = 0; i < n; ++i){
        // title:
        printf("������� �������� %d ���e��:\n", i+1);
        scanf("\n"); // �����, ��� ����������� ���������� ����� ����� ����.
        gets(db[i].title.name_dprt);

        // composition:
        printf("������� ������ %d ������ (���������� ���������� � ������� ����������):\n", i+1);
        scanf("\n");
        scanf("%d%s", &db[i].composition.nmb_emp, &db[i].composition.sname_chief);

        //date:
        printf("������� ���� �������� %d ������ (��� � �����):\n", i+1);
        scanf("%d", &db[i].date.year);
        scanf("%d", &db[i].date.month);
    }
    #else
    // ����� 1.
    printf("������ � �������� �������.\n");
	strcpy(db[0].title.name_dprt, "HSE");
	db[0].composition.nmb_emp = 1000;
	strcpy(db[0].composition.sname_chief, "Anisimov");
	db[0].date.year = 1992;
	db[0].date.month = 11;

	// ����� 2
	strcpy(db[1].title.name_dprt, "MSU");
	db[1].composition.nmb_emp = 2000;
	strcpy(db[1].composition.sname_chief, "Sadovnichiy");
	db[1].date.year = 1755;
	db[1].date.month = 1;
	n = 2;
    #endif
}
void output()
{
    for(int i = 0; i < n; ++i){
        printf("���e� �����, %d\n�������� - %s \n", i+1, db[i].title.name_dprt);
        printf("(������ %d ������: %d ����������, ��������� - %s)\n", i+1, db[i].composition.nmb_emp, db[i].composition.sname_chief);
        printf("���� �������� %d ������ - %d %d \n", i+1, db[i].date.year, db[i].date.month);
    }
}
void findstruct()
{
    // ������ �������� �������� � �������� �������.
    printf("������� ��������� ��������, � ������� ����� ����������� ����� ������� (���� �� - ���� ��):\n");
    int st_m, st_y, fn_m, fn_y;
    scanf("%d %d - %d %d", &st_y, &st_m, &fn_y, &fn_m);
    printf("������� ���������� ����������� ( ����������� ���������� - ������������ ���������� ):\n");
    int cnt_mn, cnt_mx;
    scanf("%d - %d", &cnt_mn, &cnt_mx);

    // �������� ������������ ������ ��������)
    printf("��������� ��������:\n");
    int k = 0;
    for(int i = 0; i < n; ++i){
        if(db[i].date.year >= st_y && db[i].date.year <= fn_y){
            if(st_y * 12 + st_m <= db[i].date.year * 12 + db[i].date.month && fn_y * 12 + fn_m >= db[i].date.year * 12 + db[i].date.month){
                if(db[i].composition.nmb_emp >= cnt_mn && db[i].composition.nmb_emp <= cnt_mx){
                    printf("����� %d ��������! ��������� - %s\n", i+1, db[i].composition.sname_chief);
                    ++k;
                }
            }
        }
    }
    if(k == 0){
        printf("������� ���(");
        return 0;
    }
}
