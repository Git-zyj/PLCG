#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2350;
unsigned char var_7 = (unsigned char)213;
unsigned long long int var_8 = 875642794532245345ULL;
unsigned char var_12 = (unsigned char)126;
int var_13 = -139594303;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
unsigned char var_16 = (unsigned char)191;
int var_17 = 980976798;
unsigned char var_18 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
