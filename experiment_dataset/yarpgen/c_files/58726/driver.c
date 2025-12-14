#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 1724694073197874205LL;
unsigned int var_9 = 1460583018U;
short var_10 = (short)7741;
int var_14 = 144299159;
signed char var_15 = (signed char)92;
int var_18 = 1331112169;
int zero = 0;
short var_19 = (short)29884;
unsigned int var_20 = 2584184190U;
unsigned char var_21 = (unsigned char)245;
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
