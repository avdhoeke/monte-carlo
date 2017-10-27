#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void afficher(int, int, double*);

void plot(int m, double h, double **mat){

double x = 0;
int i;

     FILE *data = fopen("data.txt", "w"); /* créer le fichier data */

     for (i = 0; i < m; i++){

  		   fprintf(data, "%f %f\n", x, (*mat[i]));
         x = x + h;

  	   }

     fclose(data);

     FILE *cmd = fopen("cmd.txt", "w");

     fprintf(cmd, "splot 'data.txt'\n");

     fclose(cmd);

     system("gnuplot cmd.txt");
  }
