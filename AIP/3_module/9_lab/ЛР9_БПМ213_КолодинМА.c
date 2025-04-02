#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
main(){
    FILE *S1, *S2;
    S1 = fopen("S1.txt","r");
    S2 = fopen("S2.txt","w");
    char l, n;
    fscanf(S1, "%c", &l);
    while( feof(S1) == 0 ){
        fscanf(S1, "%c", &n);
        if( feof(S1) != 0 ){
            break;
        }
        if( n != '\n' ){
            if( l - '0' <= 9 && l - '0' >= 0 ){
                fprintf(S2, "%c", n);
            }
            l = n;
        }
        else{
            fprintf(S2,"\n");
            l = 'a';
        }
    }
    fclose(S1);
    fclose(S2);
}
