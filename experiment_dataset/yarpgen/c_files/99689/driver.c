#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1901;
unsigned int var_3 = 3566396317U;
int var_5 = -1617518518;
unsigned int var_6 = 4082799771U;
unsigned int var_7 = 1301476631U;
unsigned int var_8 = 3394597905U;
int zero = 0;
int var_11 = -733578942;
unsigned int var_12 = 2561779997U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
