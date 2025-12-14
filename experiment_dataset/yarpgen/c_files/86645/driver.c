#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)30;
unsigned int var_10 = 1971685643U;
unsigned char var_12 = (unsigned char)61;
unsigned int var_14 = 2853316924U;
unsigned int var_16 = 1872596187U;
unsigned char var_17 = (unsigned char)95;
int zero = 0;
unsigned int var_20 = 3734739766U;
unsigned int var_21 = 969431487U;
signed char var_22 = (signed char)-5;
unsigned long long int var_23 = 2107437190604184008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
