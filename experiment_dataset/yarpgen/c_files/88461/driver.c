#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2020755055U;
signed char var_2 = (signed char)101;
signed char var_3 = (signed char)87;
short var_6 = (short)25157;
short var_8 = (short)-3155;
short var_9 = (short)-3645;
unsigned int var_10 = 4185342034U;
int zero = 0;
unsigned int var_11 = 582661585U;
short var_12 = (short)24132;
signed char var_13 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
