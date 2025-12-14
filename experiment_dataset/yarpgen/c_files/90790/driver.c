#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1051659950;
signed char var_8 = (signed char)63;
short var_10 = (short)24433;
short var_11 = (short)-428;
int zero = 0;
int var_15 = -2091222146;
unsigned short var_16 = (unsigned short)16626;
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
