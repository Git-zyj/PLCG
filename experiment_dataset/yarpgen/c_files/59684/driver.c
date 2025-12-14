#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2259574576U;
int var_8 = -1452757962;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)-4761;
short var_16 = (short)-3016;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3141012527U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
