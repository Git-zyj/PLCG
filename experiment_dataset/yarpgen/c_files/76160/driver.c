#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1465206947;
unsigned int var_3 = 1198095300U;
unsigned long long int var_6 = 6868297643560296272ULL;
int var_10 = 979322053;
long long int var_11 = 751630221273861351LL;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
unsigned long long int var_14 = 12485346143006961464ULL;
unsigned char var_15 = (unsigned char)65;
unsigned int var_16 = 736977283U;
unsigned short var_17 = (unsigned short)51171;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
