#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -727181353;
short var_8 = (short)-30298;
short var_9 = (short)25448;
int zero = 0;
long long int var_12 = 6943378169643442997LL;
signed char var_13 = (signed char)64;
short var_14 = (short)32210;
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
