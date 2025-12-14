#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
long long int var_1 = 4684339695286855595LL;
short var_5 = (short)629;
unsigned long long int var_12 = 16125339630581063355ULL;
long long int var_14 = -2449277722430302563LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-21598;
void init() {
}

void checksum() {
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
