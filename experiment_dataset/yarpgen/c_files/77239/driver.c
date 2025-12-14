#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15570257205823535813ULL;
signed char var_7 = (signed char)86;
unsigned long long int var_8 = 11206139985239437933ULL;
unsigned short var_9 = (unsigned short)14175;
unsigned short var_10 = (unsigned short)8643;
int var_11 = 731838395;
int zero = 0;
unsigned int var_12 = 1081979756U;
int var_13 = -376689852;
unsigned char var_14 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
