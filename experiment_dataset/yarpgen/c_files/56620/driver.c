#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned int var_1 = 358805625U;
unsigned char var_5 = (unsigned char)36;
int zero = 0;
long long int var_11 = -6536926151413027488LL;
unsigned long long int var_12 = 11110400487504588573ULL;
unsigned long long int var_13 = 2367997876537553680ULL;
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
