#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16625994355782548761ULL;
unsigned long long int var_5 = 15363570955404347097ULL;
unsigned long long int var_6 = 1797536129093620737ULL;
short var_8 = (short)1279;
short var_10 = (short)-19103;
unsigned long long int var_11 = 1586516446665414136ULL;
short var_12 = (short)-19402;
int zero = 0;
unsigned long long int var_14 = 6170298687673317713ULL;
unsigned long long int var_15 = 16030774340311574634ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
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
