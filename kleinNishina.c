#include <kleinNishina.h>
#include<math.h>
#include <stdio.h>
#include<stdlib.h>

void afficher(int, int, double*);
void plot(int , double , double**);

double kleinNishina(double p, double E0, double theta){

int c = 3*pow(10,8);
double i;
double me = 9.11*pow(10,-31);
double *SE;
double *VEC;
double re = 2.8*pow(10,-15);
double h = 1;
double alpha = (E0)/(me*pow(c,2));
int k = 0;
int j;
int m = round(E0/h);

VEC = calloc((m,sizeof(double)));
SE = calloc((m,sizeof(double)));

/* Calcul de la section efficace totale en integrant sur toutes les energies du photon diffusé */

for ( i = 0 ; i <= m ; i++ ){ /* Division entiere de E0*/
VEC[k] = h*k;
SE[k] = (3.141592654*pow(re,2))/(pow(alpha,2)*me*pow(c,2))(2+(pow(((E0)-i)/i,2))*(1/(pow(alpha,2)) + i/(E0) - 2/((alpha)*(i/((E0)-i)))));
k = k + 1;
}

afficher(1,m,VEC);

plot(m,h,&SE);

return E0;

}
