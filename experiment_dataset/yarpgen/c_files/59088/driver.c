#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1692851937479682604LL;
unsigned int var_4 = 88468511U;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
long long int var_16 = 6523658247599517333LL;
unsigned int var_17 = 773039858U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
