#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3660555269093489991LL;
unsigned int var_10 = 2332468443U;
signed char var_14 = (signed char)33;
int zero = 0;
signed char var_16 = (signed char)-6;
unsigned char var_17 = (unsigned char)182;
unsigned int var_18 = 2363062258U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
