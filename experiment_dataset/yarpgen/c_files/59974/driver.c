#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4409798913362210499LL;
unsigned short var_6 = (unsigned short)33462;
long long int var_13 = 412319034128853189LL;
int zero = 0;
unsigned int var_16 = 3976172599U;
short var_17 = (short)14094;
int var_18 = -366604332;
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
