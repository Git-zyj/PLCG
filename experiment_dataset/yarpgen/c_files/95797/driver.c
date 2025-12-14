#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1190148304;
unsigned long long int var_6 = 1399262013159358412ULL;
unsigned short var_10 = (unsigned short)40998;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6461990252331838332ULL;
short var_16 = (short)29963;
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
