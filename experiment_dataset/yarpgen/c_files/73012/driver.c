#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7675762139230083649LL;
short var_3 = (short)-811;
unsigned int var_5 = 3010977977U;
long long int var_13 = 3501367582999300588LL;
unsigned int var_14 = 2434724416U;
int zero = 0;
signed char var_18 = (signed char)123;
unsigned int var_19 = 4270662037U;
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
