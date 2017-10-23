#include <stdio.h>
#include <random.h>

int
main (void) {
  gsl_rng* r = initialize_random();

  int i = 0;
  while(i < 10) {
    printf("%.5f\n", generate_random(r));
    i = i + 1;
  }

 deinitialize_random(r);

  return 0;
}
