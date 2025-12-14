#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)4409;
unsigned char var_9 = (unsigned char)247;
long long int var_17 = -8876052642975042744LL;
int zero = 0;
unsigned long long int var_20 = 9116890455367623251ULL;
int var_21 = 430409330;
unsigned char var_22 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
