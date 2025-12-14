#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25413;
unsigned int var_1 = 4184696416U;
short var_3 = (short)-24220;
unsigned int var_5 = 3576631845U;
unsigned int var_6 = 2006765123U;
short var_7 = (short)19222;
unsigned int var_8 = 2315783188U;
unsigned int var_9 = 1777648173U;
int zero = 0;
unsigned int var_11 = 1329714683U;
unsigned int var_12 = 3615974141U;
short var_13 = (short)9935;
unsigned int var_14 = 2899182294U;
short var_15 = (short)8868;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
