#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2114150094;
long long int var_9 = 7701557289349970999LL;
unsigned int var_12 = 786944462U;
short var_16 = (short)-21324;
int zero = 0;
short var_18 = (short)-17151;
unsigned short var_19 = (unsigned short)9604;
short var_20 = (short)7706;
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
