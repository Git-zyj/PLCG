#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 165778279U;
unsigned short var_15 = (unsigned short)52636;
signed char var_16 = (signed char)59;
long long int var_17 = -6375484344466039425LL;
int zero = 0;
unsigned long long int var_18 = 17062448502839601239ULL;
short var_19 = (short)2801;
int var_20 = 344964984;
void init() {
}

void checksum() {
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
