#include <stdio.h>
#include <random.h>
#include <kleinNishina.h>

int
main (void) {

double p;
double theta;
double E0;

  E0 = 500;
  theta = 0;

  gsl_rng* r = initialize_random();
  p =  generate_random(r);

  kleinNishina(p,E0,theta);

  deinitialize_random(r);
  return 0;

}
