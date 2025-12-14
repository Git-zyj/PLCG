#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1304;
signed char var_8 = (signed char)53;
short var_10 = (short)-15820;
short var_11 = (short)1496;
int var_12 = 1608437789;
short var_13 = (short)20493;
unsigned long long int var_15 = 17178503311896490353ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)61803;
unsigned short var_17 = (unsigned short)45874;
short var_18 = (short)29235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
