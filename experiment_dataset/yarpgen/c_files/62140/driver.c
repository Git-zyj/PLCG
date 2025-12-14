#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1828376123U;
unsigned int var_5 = 3022822944U;
unsigned char var_7 = (unsigned char)55;
signed char var_8 = (signed char)108;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned char var_14 = (unsigned char)191;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 624395916U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
