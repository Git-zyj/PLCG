#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3457010815U;
unsigned char var_7 = (unsigned char)9;
short var_13 = (short)-17872;
int zero = 0;
unsigned int var_18 = 1876402805U;
unsigned char var_19 = (unsigned char)170;
unsigned char var_20 = (unsigned char)86;
void init() {
}

void checksum() {
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
