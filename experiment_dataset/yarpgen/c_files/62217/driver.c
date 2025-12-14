#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 162614173;
long long int var_4 = -7217551742454796502LL;
unsigned char var_5 = (unsigned char)132;
unsigned char var_8 = (unsigned char)135;
short var_10 = (short)-18547;
long long int var_13 = -4254715617276296016LL;
short var_14 = (short)-2459;
int zero = 0;
unsigned short var_15 = (unsigned short)27671;
int var_16 = -2130263730;
void init() {
}

void checksum() {
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
