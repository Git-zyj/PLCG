#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 972747220U;
unsigned short var_2 = (unsigned short)21073;
unsigned short var_6 = (unsigned short)14160;
int zero = 0;
unsigned int var_12 = 1350911131U;
unsigned short var_13 = (unsigned short)19900;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
