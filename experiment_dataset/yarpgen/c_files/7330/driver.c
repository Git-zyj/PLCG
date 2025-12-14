#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1908897119;
int var_8 = 225024572;
unsigned short var_10 = (unsigned short)4549;
short var_11 = (short)-3161;
int var_12 = 2134956574;
int zero = 0;
unsigned int var_13 = 2982471583U;
int var_14 = -280563854;
long long int var_15 = -6647222780883288189LL;
int var_16 = 342944387;
unsigned int var_17 = 2556526564U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
