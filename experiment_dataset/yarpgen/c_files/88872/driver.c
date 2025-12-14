#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14492623628748127609ULL;
int var_6 = -1294586452;
unsigned short var_10 = (unsigned short)2384;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)15662;
unsigned char var_17 = (unsigned char)239;
signed char var_18 = (signed char)43;
void init() {
}

void checksum() {
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
