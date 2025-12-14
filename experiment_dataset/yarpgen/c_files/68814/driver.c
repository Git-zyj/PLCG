#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
int var_2 = -1586876678;
short var_5 = (short)-25299;
long long int var_7 = 1853466010542894073LL;
unsigned char var_13 = (unsigned char)42;
long long int var_15 = -4085621300516481066LL;
unsigned long long int var_17 = 16941463944007958304ULL;
int zero = 0;
int var_20 = 1960410360;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2559518108U;
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
