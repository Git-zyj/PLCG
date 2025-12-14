#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1192989267;
int var_2 = -1100339712;
unsigned char var_11 = (unsigned char)33;
unsigned short var_12 = (unsigned short)29135;
int zero = 0;
unsigned int var_18 = 1686139494U;
unsigned short var_19 = (unsigned short)2219;
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
