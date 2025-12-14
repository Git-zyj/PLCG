#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1228361510U;
unsigned char var_5 = (unsigned char)94;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
unsigned short var_16 = (unsigned short)2998;
short var_17 = (short)20346;
unsigned short var_18 = (unsigned short)62742;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
