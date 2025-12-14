#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1705777688U;
unsigned int var_7 = 774906888U;
unsigned long long int var_10 = 409324964182808995ULL;
unsigned int var_11 = 4016696828U;
int zero = 0;
int var_14 = 305400411;
long long int var_15 = 7681429820090062683LL;
unsigned int var_16 = 2050815010U;
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
