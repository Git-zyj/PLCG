#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2443701556U;
unsigned long long int var_8 = 239109124767642630ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 1799897783U;
int zero = 0;
long long int var_18 = 7833579942361841866LL;
unsigned short var_19 = (unsigned short)16484;
short var_20 = (short)-3230;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
