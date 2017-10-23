#include <sys/time.h>
#include <gsl/gsl_rng.h>

gsl_rng* initialize_random();
double generate_random(gsl_rng*);
void deinitialize_random(gsl_rng*);
