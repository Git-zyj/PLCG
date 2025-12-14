#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -506626474;
signed char var_8 = (signed char)8;
short var_14 = (short)29928;
int var_19 = -308064137;
int zero = 0;
int var_20 = 1856064912;
unsigned short var_21 = (unsigned short)39115;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
