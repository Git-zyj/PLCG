#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
long long int var_10 = 8140947872661181624LL;
long long int var_16 = -6368052213544973690LL;
int zero = 0;
signed char var_17 = (signed char)96;
long long int var_18 = 7009212174347229255LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)5258;
unsigned short var_21 = (unsigned short)19524;
unsigned short var_22 = (unsigned short)9166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
