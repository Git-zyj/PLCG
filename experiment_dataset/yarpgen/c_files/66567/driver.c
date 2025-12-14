#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -393550051;
unsigned short var_2 = (unsigned short)12768;
unsigned char var_3 = (unsigned char)10;
int var_6 = -2066158687;
signed char var_11 = (signed char)42;
unsigned int var_14 = 1665104755U;
int zero = 0;
unsigned int var_17 = 2660419583U;
int var_18 = 1569438037;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
