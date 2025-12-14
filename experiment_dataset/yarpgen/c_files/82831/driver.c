#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)237;
unsigned int var_10 = 966714181U;
unsigned int var_13 = 2909243550U;
_Bool var_15 = (_Bool)1;
unsigned int var_18 = 2695800961U;
int zero = 0;
unsigned short var_19 = (unsigned short)38642;
unsigned int var_20 = 2026762205U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
