#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3858281687U;
unsigned char var_7 = (unsigned char)183;
unsigned short var_8 = (unsigned short)56037;
int var_13 = 1822256752;
int zero = 0;
unsigned int var_15 = 387737525U;
long long int var_16 = 4853019790078386619LL;
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
