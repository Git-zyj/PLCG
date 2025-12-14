#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)92;
unsigned short var_5 = (unsigned short)12473;
int var_12 = 1949901063;
signed char var_13 = (signed char)1;
unsigned short var_14 = (unsigned short)32051;
unsigned char var_15 = (unsigned char)219;
unsigned long long int var_17 = 561722723463132054ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
