#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2465437222U;
unsigned char var_7 = (unsigned char)164;
unsigned int var_10 = 1219168624U;
short var_14 = (short)20746;
int zero = 0;
int var_16 = 1174236003;
short var_17 = (short)24578;
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
