#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1030716227;
long long int var_10 = -5354349183980665992LL;
long long int var_13 = 5944801433757360076LL;
int var_16 = -1536124672;
int zero = 0;
int var_17 = -1542646517;
unsigned int var_18 = 3133663887U;
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
