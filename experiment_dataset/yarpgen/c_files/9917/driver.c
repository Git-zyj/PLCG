#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)130;
unsigned long long int var_4 = 16973675687682083977ULL;
unsigned char var_6 = (unsigned char)33;
signed char var_11 = (signed char)84;
int zero = 0;
unsigned short var_15 = (unsigned short)22094;
int var_16 = 532874479;
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
