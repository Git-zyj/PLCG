#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
unsigned char var_5 = (unsigned char)128;
unsigned char var_6 = (unsigned char)193;
unsigned int var_8 = 3021695625U;
int zero = 0;
unsigned char var_15 = (unsigned char)215;
unsigned int var_16 = 1864546253U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6706385293012441390LL;
unsigned long long int var_19 = 7998981414046579195ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
