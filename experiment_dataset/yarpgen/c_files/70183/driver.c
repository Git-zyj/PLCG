#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7251491477980999540LL;
unsigned int var_11 = 3191125318U;
short var_12 = (short)7745;
unsigned long long int var_16 = 14288952748053863713ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)166;
unsigned int var_20 = 4123600275U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
