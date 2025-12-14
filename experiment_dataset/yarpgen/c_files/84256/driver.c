#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 7221297425287022625ULL;
int var_11 = 48692017;
unsigned long long int var_13 = 15576765556353257825ULL;
int zero = 0;
signed char var_14 = (signed char)-126;
unsigned char var_15 = (unsigned char)98;
unsigned int var_16 = 3075011819U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
