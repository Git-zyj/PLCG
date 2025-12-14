#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
int var_2 = -1635593896;
unsigned long long int var_3 = 10495053408736730969ULL;
short var_4 = (short)24146;
short var_7 = (short)-14414;
long long int var_9 = -7103529225504646649LL;
long long int var_12 = -5627107497460139421LL;
unsigned int var_13 = 3785887436U;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1960297753U;
unsigned int var_17 = 3340229125U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
