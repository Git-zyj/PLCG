#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2172119227U;
unsigned long long int var_4 = 9082953471614753101ULL;
unsigned int var_6 = 723650057U;
unsigned long long int var_7 = 4430129524634731090ULL;
signed char var_8 = (signed char)-116;
int zero = 0;
long long int var_10 = -2562945347253727451LL;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
