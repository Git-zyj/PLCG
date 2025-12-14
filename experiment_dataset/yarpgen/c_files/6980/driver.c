#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
unsigned char var_5 = (unsigned char)44;
short var_6 = (short)-12994;
short var_12 = (short)-6477;
int zero = 0;
signed char var_14 = (signed char)-11;
unsigned long long int var_15 = 11021766178720701258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
