#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1898787770U;
int var_6 = -193696512;
int zero = 0;
unsigned short var_15 = (unsigned short)52906;
long long int var_16 = 4979843643216963030LL;
signed char var_17 = (signed char)33;
unsigned char var_18 = (unsigned char)61;
signed char var_19 = (signed char)19;
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
