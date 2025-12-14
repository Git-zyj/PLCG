#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29710;
short var_6 = (short)-8936;
unsigned char var_10 = (unsigned char)93;
unsigned short var_12 = (unsigned short)24765;
signed char var_13 = (signed char)20;
int zero = 0;
unsigned char var_14 = (unsigned char)98;
signed char var_15 = (signed char)86;
unsigned int var_16 = 847169864U;
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
