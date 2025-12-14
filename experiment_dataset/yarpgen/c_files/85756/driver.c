#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1794147846;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-13525;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 6690251559865971211LL;
unsigned int var_13 = 3687760892U;
long long int var_14 = 2812259325781477692LL;
int var_15 = 1637737790;
unsigned int var_16 = 3677025401U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
