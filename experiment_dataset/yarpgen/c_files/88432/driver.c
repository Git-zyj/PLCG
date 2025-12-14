#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2871580335434264778ULL;
short var_12 = (short)18279;
unsigned long long int var_13 = 12543875681323628597ULL;
int var_15 = -606554468;
int zero = 0;
signed char var_16 = (signed char)43;
signed char var_17 = (signed char)16;
void init() {
}

void checksum() {
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
