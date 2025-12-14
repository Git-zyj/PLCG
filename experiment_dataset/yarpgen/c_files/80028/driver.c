#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1432892595U;
unsigned char var_3 = (unsigned char)153;
unsigned char var_5 = (unsigned char)17;
int zero = 0;
unsigned int var_15 = 911170878U;
short var_16 = (short)4318;
unsigned short var_17 = (unsigned short)24896;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
