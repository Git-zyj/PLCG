#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)27536;
unsigned char var_6 = (unsigned char)29;
unsigned char var_8 = (unsigned char)141;
int var_9 = 230022298;
unsigned long long int var_13 = 16285976092400343232ULL;
int zero = 0;
unsigned int var_15 = 3533148810U;
unsigned short var_16 = (unsigned short)42061;
long long int var_17 = -8443171771237435050LL;
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
