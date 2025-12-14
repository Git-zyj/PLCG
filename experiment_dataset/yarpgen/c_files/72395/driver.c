#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20556;
unsigned int var_1 = 1473227810U;
unsigned long long int var_9 = 10547174465587125232ULL;
int var_11 = 405528532;
int zero = 0;
unsigned int var_15 = 4135666804U;
unsigned char var_16 = (unsigned char)173;
void init() {
}

void checksum() {
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
