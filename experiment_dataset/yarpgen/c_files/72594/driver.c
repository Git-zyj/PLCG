#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14679;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 16667845647188489161ULL;
unsigned int var_12 = 2601089751U;
int zero = 0;
unsigned int var_14 = 3975713379U;
unsigned int var_15 = 659515762U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)79;
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
