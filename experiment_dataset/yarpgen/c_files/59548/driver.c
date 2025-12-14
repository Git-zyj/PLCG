#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9599721109225981332ULL;
long long int var_8 = 12869163991415168LL;
unsigned int var_12 = 339009653U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 3355984654824857512ULL;
unsigned long long int var_18 = 8018160288305449767ULL;
short var_19 = (short)-15936;
long long int var_20 = 6610782932144839316LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
