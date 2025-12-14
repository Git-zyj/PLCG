#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1797863349;
signed char var_10 = (signed char)101;
unsigned short var_12 = (unsigned short)24863;
int zero = 0;
unsigned char var_13 = (unsigned char)226;
int var_14 = -1491648305;
signed char var_15 = (signed char)122;
int var_16 = 368621965;
signed char var_17 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
