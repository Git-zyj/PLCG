#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)233;
unsigned short var_4 = (unsigned short)58891;
unsigned short var_10 = (unsigned short)26853;
unsigned char var_11 = (unsigned char)61;
int zero = 0;
short var_14 = (short)12745;
long long int var_15 = -5999959266449379635LL;
int var_16 = 969119040;
int var_17 = -1629245517;
short var_18 = (short)-26814;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
