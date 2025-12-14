#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 751292502;
short var_4 = (short)-6428;
int var_6 = -159469538;
short var_8 = (short)-17488;
short var_12 = (short)-30043;
long long int var_14 = 1776720694041834580LL;
short var_15 = (short)334;
int zero = 0;
unsigned int var_17 = 3124352650U;
short var_18 = (short)-23793;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
