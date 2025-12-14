#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27493;
unsigned char var_5 = (unsigned char)55;
int var_8 = 2002675696;
unsigned int var_12 = 3202023727U;
int zero = 0;
unsigned short var_14 = (unsigned short)9125;
long long int var_15 = -1018375587436416536LL;
long long int var_16 = 5342778646404504178LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
