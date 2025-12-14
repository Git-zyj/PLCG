#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 368140144839288632LL;
unsigned long long int var_3 = 3578139367562861455ULL;
int var_9 = -982627172;
unsigned char var_12 = (unsigned char)252;
int zero = 0;
short var_14 = (short)-537;
unsigned long long int var_15 = 2729702197936256106ULL;
unsigned int var_16 = 1299782208U;
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
