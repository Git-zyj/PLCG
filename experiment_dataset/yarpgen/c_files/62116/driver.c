#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)70;
signed char var_11 = (signed char)13;
unsigned char var_14 = (unsigned char)96;
int zero = 0;
unsigned short var_15 = (unsigned short)10120;
unsigned short var_16 = (unsigned short)21594;
unsigned char var_17 = (unsigned char)86;
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
