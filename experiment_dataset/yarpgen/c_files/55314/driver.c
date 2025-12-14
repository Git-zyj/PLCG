#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14091;
unsigned int var_1 = 1013698451U;
short var_2 = (short)9387;
unsigned short var_9 = (unsigned short)17979;
int zero = 0;
unsigned char var_14 = (unsigned char)168;
signed char var_15 = (signed char)-36;
long long int var_16 = -6405007517153991888LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
