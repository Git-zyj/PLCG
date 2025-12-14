#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = 4829575365822015240LL;
int var_15 = 900377256;
int zero = 0;
long long int var_17 = -2148653193815430243LL;
unsigned char var_18 = (unsigned char)178;
unsigned int var_19 = 1510063531U;
void init() {
}

void checksum() {
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
