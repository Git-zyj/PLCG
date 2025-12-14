#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9035;
unsigned short var_1 = (unsigned short)39586;
unsigned int var_3 = 1859224202U;
int var_10 = -493188697;
int var_13 = -1453500124;
int zero = 0;
long long int var_15 = -3276660222675655550LL;
unsigned int var_16 = 3158801931U;
unsigned short var_17 = (unsigned short)15466;
short var_18 = (short)-6623;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
