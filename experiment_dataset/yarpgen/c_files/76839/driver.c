#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2114550530;
unsigned int var_2 = 2545779920U;
int var_5 = -712135137;
unsigned int var_12 = 3432073031U;
int zero = 0;
long long int var_14 = -4884414958985364754LL;
unsigned long long int var_15 = 4933839553101410685ULL;
unsigned int var_16 = 1766989394U;
unsigned int var_17 = 121772542U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
