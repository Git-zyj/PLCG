#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7138771830008483600ULL;
short var_9 = (short)-6794;
unsigned int var_10 = 497736144U;
int zero = 0;
int var_11 = -528628033;
int var_12 = -1417696450;
unsigned long long int var_13 = 6350453036630934266ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
