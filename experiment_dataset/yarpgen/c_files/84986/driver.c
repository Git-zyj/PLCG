#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-44;
unsigned short var_5 = (unsigned short)48122;
short var_7 = (short)16994;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)33;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-25533;
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
