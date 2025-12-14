#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 2137513350;
long long int var_9 = 3502873907880745214LL;
int zero = 0;
unsigned int var_10 = 3192920372U;
short var_11 = (short)-22405;
unsigned int var_12 = 1265702276U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
