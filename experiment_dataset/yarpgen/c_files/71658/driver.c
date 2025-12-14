#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 107338496U;
unsigned int var_7 = 3182650030U;
unsigned int var_9 = 1397063783U;
unsigned int var_11 = 2381194271U;
unsigned int var_12 = 3507135327U;
unsigned int var_14 = 3986104986U;
unsigned int var_15 = 4155871300U;
int zero = 0;
unsigned int var_17 = 560973468U;
unsigned int var_18 = 3872107780U;
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
