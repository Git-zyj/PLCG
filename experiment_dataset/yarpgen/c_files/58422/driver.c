#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -737319726;
short var_10 = (short)27146;
unsigned char var_11 = (unsigned char)10;
unsigned long long int var_15 = 1921351927508724875ULL;
int zero = 0;
unsigned int var_18 = 2673273069U;
long long int var_19 = 6418581946674274914LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
