#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19360;
unsigned int var_4 = 2990193665U;
unsigned long long int var_7 = 16069657527237314032ULL;
unsigned int var_8 = 3250205483U;
int zero = 0;
int var_15 = 1294815024;
unsigned int var_16 = 1325187338U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
