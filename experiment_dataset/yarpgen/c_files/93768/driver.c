#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_8 = -1529688604196524658LL;
unsigned short var_10 = (unsigned short)6184;
int var_11 = 1839479086;
int var_15 = -1102543986;
int zero = 0;
int var_18 = -1880429395;
unsigned short var_19 = (unsigned short)18361;
void init() {
}

void checksum() {
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
