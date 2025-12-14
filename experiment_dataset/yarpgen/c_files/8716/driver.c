#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)66;
short var_6 = (short)-28541;
unsigned short var_7 = (unsigned short)47375;
short var_8 = (short)6013;
signed char var_9 = (signed char)-50;
unsigned long long int var_10 = 1655409118005426622ULL;
int var_12 = 1809129283;
int zero = 0;
short var_13 = (short)10777;
unsigned char var_14 = (unsigned char)134;
void init() {
}

void checksum() {
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
