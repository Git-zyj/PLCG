#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3111811796U;
unsigned char var_8 = (unsigned char)46;
unsigned int var_13 = 1663336029U;
int zero = 0;
signed char var_16 = (signed char)70;
unsigned short var_17 = (unsigned short)2525;
short var_18 = (short)-26229;
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
