#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3024393244276109139LL;
signed char var_16 = (signed char)-6;
long long int var_17 = -5580039167504703894LL;
int zero = 0;
int var_20 = 1116835169;
unsigned short var_21 = (unsigned short)30313;
long long int var_22 = -3003571918354216645LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
