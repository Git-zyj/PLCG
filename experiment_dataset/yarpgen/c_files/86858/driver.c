#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1457769583U;
int var_3 = -808141224;
unsigned long long int var_10 = 11084888631628554521ULL;
long long int var_11 = -1157735722846050633LL;
int var_12 = -414329813;
int zero = 0;
signed char var_13 = (signed char)101;
unsigned long long int var_14 = 12340723056721465247ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
