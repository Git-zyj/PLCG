#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1828535764;
unsigned int var_3 = 1672852325U;
unsigned int var_4 = 3444887486U;
int var_7 = 1889572719;
int zero = 0;
unsigned short var_10 = (unsigned short)60577;
short var_11 = (short)14597;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
