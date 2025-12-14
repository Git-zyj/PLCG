#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2565395448U;
signed char var_13 = (signed char)120;
unsigned long long int var_14 = 14880521488638569459ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)209;
unsigned char var_17 = (unsigned char)37;
unsigned int var_18 = 193053695U;
unsigned int var_19 = 1903365625U;
void init() {
}

void checksum() {
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
