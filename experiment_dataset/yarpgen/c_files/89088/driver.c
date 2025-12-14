#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32210;
unsigned long long int var_4 = 15443953904366968175ULL;
unsigned int var_5 = 2385343605U;
unsigned int var_6 = 3671367531U;
unsigned long long int var_10 = 17692431576058019171ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)25773;
unsigned int var_13 = 1943315425U;
long long int var_14 = 2883187440247232488LL;
short var_15 = (short)-21189;
int var_16 = -1284159531;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
