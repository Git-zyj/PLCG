#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)196;
long long int var_8 = 1042783034015859690LL;
long long int var_14 = -6372352302838274331LL;
int zero = 0;
short var_20 = (short)31381;
long long int var_21 = -2733403643814635376LL;
short var_22 = (short)-17264;
int var_23 = -168069251;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
