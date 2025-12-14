#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20534;
signed char var_1 = (signed char)52;
unsigned int var_4 = 1636913571U;
int zero = 0;
unsigned long long int var_12 = 9780898641305400265ULL;
int var_13 = -1109101426;
unsigned long long int var_14 = 8640478206715336304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
