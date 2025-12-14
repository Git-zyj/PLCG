#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3665543511405578855LL;
unsigned int var_2 = 2387335535U;
unsigned int var_3 = 1349690817U;
unsigned int var_4 = 1228091833U;
unsigned char var_5 = (unsigned char)232;
unsigned int var_7 = 3608018053U;
unsigned int var_11 = 1645962211U;
unsigned char var_12 = (unsigned char)11;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
long long int var_17 = -9209322248183172633LL;
long long int var_18 = -8326408371524598988LL;
void init() {
}

void checksum() {
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
