#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1295973869U;
int var_8 = 1702360735;
long long int var_10 = 100213424957226345LL;
int zero = 0;
int var_12 = -84463922;
signed char var_13 = (signed char)-95;
int var_14 = 384032067;
unsigned int var_15 = 3250547855U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
