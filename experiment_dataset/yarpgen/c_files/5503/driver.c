#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17432;
short var_1 = (short)13685;
unsigned short var_4 = (unsigned short)1609;
short var_9 = (short)-14730;
unsigned int var_14 = 190355420U;
short var_15 = (short)-31658;
int zero = 0;
unsigned short var_20 = (unsigned short)29054;
unsigned int var_21 = 245365602U;
unsigned char var_22 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
