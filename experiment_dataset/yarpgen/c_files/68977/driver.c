#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 8751685;
int var_2 = -1539499984;
signed char var_4 = (signed char)-88;
short var_5 = (short)29398;
unsigned char var_6 = (unsigned char)147;
short var_7 = (short)27887;
unsigned int var_8 = 3325613882U;
signed char var_10 = (signed char)38;
unsigned short var_12 = (unsigned short)7793;
short var_13 = (short)-32625;
int var_15 = 1132887142;
int zero = 0;
unsigned short var_16 = (unsigned short)45526;
signed char var_17 = (signed char)-113;
short var_18 = (short)10899;
unsigned short var_19 = (unsigned short)55243;
unsigned short var_20 = (unsigned short)26748;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
