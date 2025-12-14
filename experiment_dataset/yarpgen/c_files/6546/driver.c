#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6551369656433971805LL;
long long int var_10 = -241714541351622025LL;
unsigned short var_13 = (unsigned short)13302;
int zero = 0;
int var_20 = 145830625;
unsigned int var_21 = 247425660U;
unsigned int var_22 = 2150461374U;
unsigned short var_23 = (unsigned short)12026;
unsigned short var_24 = (unsigned short)16462;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
