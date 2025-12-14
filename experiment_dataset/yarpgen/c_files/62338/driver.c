#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 553652761U;
unsigned int var_12 = 609860125U;
unsigned long long int var_14 = 10368753284983808404ULL;
int zero = 0;
short var_16 = (short)-24038;
signed char var_17 = (signed char)10;
short var_18 = (short)15783;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
