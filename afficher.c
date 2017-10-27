#include <stdio.h>

/* affiche la matrice MTR(MxN) */
void afficher(int m, int n, double *mtr){
    int i, j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%18.14e ", mtr[i+m*j]);
        printf("\n");
    }
    printf("\n");
}
