#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -196399529559534970LL;
unsigned int var_6 = 2309830953U;
unsigned char var_11 = (unsigned char)22;
unsigned int var_15 = 219734043U;
unsigned char var_16 = (unsigned char)115;
int zero = 0;
unsigned int var_17 = 725671156U;
unsigned int var_18 = 1391909493U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
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
