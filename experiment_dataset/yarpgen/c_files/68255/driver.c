#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13923;
int var_2 = -1364835970;
unsigned short var_7 = (unsigned short)41512;
int var_14 = 947173252;
int zero = 0;
int var_17 = -29048616;
int var_18 = -506455286;
int var_19 = -1850883074;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
