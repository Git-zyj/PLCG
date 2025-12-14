#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10113;
unsigned short var_8 = (unsigned short)27965;
short var_11 = (short)-17711;
int zero = 0;
unsigned long long int var_14 = 8985766932735830513ULL;
signed char var_15 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
