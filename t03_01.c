// 12S23046 - Anastasya T.B. Siahaan 

#include <stdio.h>


int main(int argc, char **argv) {
    int x;
scanf("%d", &x);    
    int angka[x];
    for (int n = 0; n < x; n++) {
       
        scanf("%d", &angka[n]);

    }
    
    int min ;  
    int max ;  

    for (int n = 0; n < x;n++) {
        if (angka[n] < min) {
            min = angka[n];
        }

        if (angka[n] > max) {
            max = angka[n];
        }
    }

    printf(" %d\n", min);
    printf(" %d\n", max);

    return 0;
}