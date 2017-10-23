#include <random.h>

gsl_rng* initialize_random() {
  const gsl_rng_type * T;
  gsl_rng_env_setup();
  struct timeval tv;
  unsigned long seed = tv.tv_sec + tv.tv_usec;

  T = gsl_rng_default;
  gsl_rng* r = gsl_rng_alloc (T);
  gsl_rng_set(r, seed);
  return r;
}

double generate_random(gsl_rng* r) {
  return gsl_rng_uniform(r);
}

void deinitialize_random(gsl_rng* r) {
  gsl_rng_free (r);
}
