#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10349142165953089582ULL;
int var_2 = 1898383441;
short var_4 = (short)-8260;
short var_16 = (short)-21370;
int zero = 0;
unsigned int var_17 = 1409534694U;
unsigned char var_18 = (unsigned char)158;
signed char var_19 = (signed char)88;
unsigned char var_20 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
