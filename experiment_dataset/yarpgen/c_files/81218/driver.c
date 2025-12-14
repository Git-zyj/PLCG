#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 750964207U;
unsigned int var_8 = 1168483196U;
unsigned int var_18 = 2762737254U;
int zero = 0;
unsigned int var_19 = 1819740146U;
unsigned int var_20 = 2994405455U;
unsigned int var_21 = 3565575810U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
