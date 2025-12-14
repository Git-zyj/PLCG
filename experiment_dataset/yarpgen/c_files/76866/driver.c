#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4191657769U;
unsigned short var_2 = (unsigned short)48862;
int var_3 = 538135082;
long long int var_4 = 962119275316510180LL;
short var_7 = (short)7766;
unsigned int var_8 = 1548413658U;
int zero = 0;
int var_10 = 456382765;
unsigned long long int var_11 = 11716410308633720941ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
