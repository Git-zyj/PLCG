#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)58590;
unsigned long long int var_10 = 2741812028513822498ULL;
unsigned char var_17 = (unsigned char)238;
int zero = 0;
unsigned int var_18 = 2041084702U;
unsigned int var_19 = 4177141375U;
unsigned short var_20 = (unsigned short)63874;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
