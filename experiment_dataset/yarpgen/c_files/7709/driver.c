#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)8952;
signed char var_13 = (signed char)74;
unsigned int var_18 = 2276253943U;
int zero = 0;
unsigned short var_20 = (unsigned short)56452;
unsigned short var_21 = (unsigned short)38517;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
