#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3668579998587837208ULL;
int var_10 = -1979958820;
unsigned int var_11 = 1692186585U;
unsigned int var_16 = 1248695232U;
long long int var_18 = -1135453701820827568LL;
int zero = 0;
unsigned short var_20 = (unsigned short)47595;
unsigned int var_21 = 2305865536U;
long long int var_22 = -7402360393073565425LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
