#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)79;
unsigned char var_4 = (unsigned char)50;
short var_5 = (short)-28213;
unsigned long long int var_10 = 2444744501182939195ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)16;
unsigned char var_15 = (unsigned char)117;
unsigned long long int var_16 = 5434988893682819178ULL;
unsigned long long int var_17 = 16566812334613206998ULL;
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
