#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 769628613U;
unsigned char var_6 = (unsigned char)103;
unsigned int var_8 = 3751382694U;
short var_10 = (short)-21032;
int zero = 0;
unsigned char var_13 = (unsigned char)103;
unsigned long long int var_14 = 5159684959143009357ULL;
long long int var_15 = -4654173899225952847LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
