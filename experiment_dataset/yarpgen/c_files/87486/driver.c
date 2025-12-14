#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 590967328;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 4091545505U;
signed char var_10 = (signed char)84;
int zero = 0;
unsigned long long int var_15 = 9313212900120783750ULL;
unsigned long long int var_16 = 13600810392947236597ULL;
short var_17 = (short)-17343;
void init() {
}

void checksum() {
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
