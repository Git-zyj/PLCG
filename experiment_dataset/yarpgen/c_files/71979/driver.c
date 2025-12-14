#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)47796;
unsigned short var_3 = (unsigned short)31478;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-30408;
_Bool var_10 = (_Bool)0;
int var_12 = -346332504;
unsigned short var_13 = (unsigned short)42242;
int zero = 0;
signed char var_14 = (signed char)64;
int var_15 = -1335261501;
unsigned char var_16 = (unsigned char)103;
short var_17 = (short)10526;
short var_18 = (short)30319;
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
