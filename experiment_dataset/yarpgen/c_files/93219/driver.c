#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
unsigned int var_7 = 4280122286U;
long long int var_10 = 7955696953589301835LL;
int zero = 0;
signed char var_12 = (signed char)-8;
unsigned int var_13 = 1240788982U;
long long int var_14 = 6624415740136537325LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
