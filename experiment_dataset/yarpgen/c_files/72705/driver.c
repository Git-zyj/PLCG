#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14593542176644253403ULL;
unsigned int var_7 = 811425743U;
unsigned long long int var_12 = 10091784832079091058ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)57872;
unsigned short var_14 = (unsigned short)3871;
unsigned long long int var_15 = 14331672628442682440ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
