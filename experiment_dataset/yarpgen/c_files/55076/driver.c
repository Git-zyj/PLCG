#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4817;
short var_3 = (short)27000;
int var_5 = -408588477;
int var_6 = 1560721949;
short var_8 = (short)-30554;
short var_9 = (short)4732;
short var_10 = (short)-21891;
short var_11 = (short)22922;
short var_12 = (short)13539;
short var_15 = (short)-21589;
int zero = 0;
short var_19 = (short)24533;
short var_20 = (short)-15042;
short var_21 = (short)18738;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
