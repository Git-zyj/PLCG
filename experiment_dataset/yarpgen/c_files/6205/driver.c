#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8135489624688419718LL;
unsigned char var_5 = (unsigned char)168;
int zero = 0;
unsigned int var_13 = 2450639722U;
long long int var_14 = -1046407102042942204LL;
unsigned char var_15 = (unsigned char)88;
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
