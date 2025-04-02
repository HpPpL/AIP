#include <math.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};
int comp(struct point nl, struct point np, struct point vl, struct point vp, struct point prov){
    if( prov.x >= nl.x && prov.x >= vl.x && prov.x <= np.x && prov.x <= vp.x){
        if( prov.y >= nl.y && prov.y >= np.y && prov.y <= vl.y && prov.y <= vp.y){
            return 1;
        }
    }
    return -1;
}
int main(){
    int width = 40, in;
    int height = 40;
    char a[height][width], mm[height][width];

    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            if(abs(i - 20) + abs(j - 20) <= 10){
                a[i][j] = '@';
                mm[i][j] = '.';
            }
            else{
                a[i][j] = '.';
                mm[i][j] = '.';
            }
        }
    }
    struct point o, b, c, d, e, t;
    o.x = 20; o.y = 20;
    b.x = 20; b.y = 10;
    c.x = 30; c.y = 20;
    d.x = 20; d.y = 30;
    e.x = 10; e.y = 20; // это были координаты. ћогли бы записать через а и b , но € уже устал
    // ѕосле поворота получаем новые координаты: (приблизительно). ѕовороты можно сделать через функции, но допустим, € посчитал.
    o.x = 20; o.y = 20;
    b.x = 13; b.y = 13;
    c.x = 27; c.y = 13;
    d.x = 27; d.y = 27;
    e.x = 13; e.y = 27;
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            t.x = i;
            t.y = j;
            if(comp(b, c, e, d, t) == 1){
                mm[i][j]='@';
            }
        }
    }

    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            printf("%c",mm[i][j]);
        }
        printf("\n");
    }
}

