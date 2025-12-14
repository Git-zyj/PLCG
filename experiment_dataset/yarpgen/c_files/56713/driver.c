#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -913851477;
unsigned short var_4 = (unsigned short)32334;
int var_6 = 227890811;
unsigned short var_9 = (unsigned short)2759;
unsigned int var_13 = 991760926U;
int var_14 = -846740201;
int zero = 0;
int var_15 = -530684818;
int var_16 = -2100097772;
unsigned short var_17 = (unsigned short)32026;
int var_18 = 681958674;
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
