#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16546;
unsigned char var_1 = (unsigned char)85;
unsigned short var_4 = (unsigned short)24639;
int var_12 = -2104545522;
unsigned char var_14 = (unsigned char)44;
int zero = 0;
long long int var_18 = -6316865870643954641LL;
short var_19 = (short)19474;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
