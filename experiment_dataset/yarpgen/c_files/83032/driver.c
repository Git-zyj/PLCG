#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)25;
int zero = 0;
unsigned int var_12 = 3462894177U;
long long int var_13 = 3369581005636408512LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -238483380857075795LL;
unsigned int var_16 = 1894833393U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
