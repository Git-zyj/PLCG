#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)18479;
unsigned short var_12 = (unsigned short)55737;
long long int var_13 = 3942735741025420235LL;
int zero = 0;
short var_14 = (short)16254;
unsigned int var_15 = 3565541537U;
long long int var_16 = -2202764884636439813LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
