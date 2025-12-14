#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4287449227139270496LL;
long long int var_7 = -2244694084603016209LL;
unsigned int var_11 = 2094061096U;
int zero = 0;
unsigned int var_14 = 3049735402U;
unsigned int var_15 = 4117559288U;
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
