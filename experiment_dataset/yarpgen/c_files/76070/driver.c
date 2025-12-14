#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33274;
unsigned short var_2 = (unsigned short)52787;
unsigned short var_5 = (unsigned short)14447;
short var_11 = (short)31904;
int zero = 0;
short var_15 = (short)2213;
int var_16 = -604813240;
unsigned long long int var_17 = 14401991774489064397ULL;
unsigned int var_18 = 1800394154U;
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
