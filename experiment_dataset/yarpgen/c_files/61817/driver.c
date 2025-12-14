#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)41184;
long long int var_5 = 8205152704577188793LL;
int zero = 0;
long long int var_14 = -7678906017461102253LL;
short var_15 = (short)-19348;
long long int var_16 = -5494425631449608925LL;
unsigned short var_17 = (unsigned short)60301;
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
