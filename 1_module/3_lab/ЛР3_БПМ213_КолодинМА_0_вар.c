#include <stdio.h>
#include <math.h>
long long int fct(int x){ // нахождение x!.
    long long int k=1;
    while(x>0){
        k*=x;
        x-=1;
    }
    return k;
}
int sr( double x, double y, int tc){
    double eps=1 ;
    for(int i=0; i<tc; ++i){
        eps/=10;
    }
    if( fabs(x-y) < eps){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    double a=0, x=0;
    printf("Enter numbers ( x and a ):\n");
    scanf("%lf", &x); scanf("%lf", &a); // ввод чисел x и a.
    printf("Choose a calculation method:\n");
    printf("1. With a given precision;\n");
    printf("2. For a given number of members of the series;\n");
    int item=0; scanf("%d", &item);
    switch(item){ // разветвление случаев по выбору пользовател€.
        case 1:
            printf("Selected method - 1. Confirmed \n"); // считаем с заданной точностью.
            printf("Enter accuracy:\n");
            int acr;
            scanf("%d", &acr);
            printf("Result by smart (!) method:\n");
            double res=0;
            res=pow((1+x), a);
            printf("(1 + %lf) ^ %lf = ", x, a);
            printf("%.*lf\n", acr, res);

            printf("Result by basic method:\n");
            double rs_l=-1000, rs_n=1000;
            int nmbb=1;
            double rss=1, t_xx=1, t_mm=1, t_aa=a;
            while(sr(rs_l, rs_n, acr)==0 /*|| nmbb==1*/){

                rss=1;
                t_xx=1;
                t_mm=1;
                t_aa=a;
                for(int i=1; i<nmbb; ++i){
                    for(int j=0; j<i; ++j){
                        t_xx*=x;
                        t_mm*=t_aa;
                        t_aa-=1;
                    }
                rss+=t_mm*t_xx/fct(i);
                t_xx=1;
                t_mm=1;
                t_aa=a;
                }
                nmbb++;
                rs_l=rs_n;
                rs_n=rss;
        } // цикл по вычислению конечного значени€.  аждый n-ый член вычисл€етс€ отдельно.
        printf("(1 + %lf) ^ %lf = %lf\n", x, a, rs_n);
        return 0;
        case 2:
            printf("Selected method - 2. Confirmed \n"); // считаем выражение по формуле дл€ заданного члена в последовательности.
            printf("Enter the number of members of the series :\n");
            int nmb;
            scanf("%d", &nmb);
            printf("Result:\n");
            if(nmb==1){ // по разложению, если n=1 => f(n)=1.
                printf("1");
                return 0;
            }
            if(nmb<1){
                printf("Incorrect output");
                return 0;
            }
        double rs=1, t_x=1, t_m=1, t_a=a;
        for(int i=1; i<nmb; ++i){
            for(int j=0; j<i; ++j){
                t_x*=x;
                t_m*=t_a;
                t_a-=1;
                }
            rs+=t_m*t_x/fct(i);
            t_x=1;
            t_m=1;
            t_a=a;
        } // цикл по вычислению конечного значени€.  аждый n-ый член вычисл€етс€ отдельно.
        printf("(1 + %lf) ^ %lf = %lf", x, a, rs);
        return 0;
        }
}
