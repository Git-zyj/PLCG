#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4106581905187644190LL;
unsigned short var_4 = (unsigned short)41535;
signed char var_5 = (signed char)18;
int var_8 = -1876691255;
short var_9 = (short)-20867;
int var_11 = 2038535954;
int var_12 = -803950042;
unsigned long long int var_13 = 7911832530966074922ULL;
unsigned long long int var_14 = 14106086226445403323ULL;
int zero = 0;
short var_15 = (short)462;
unsigned char var_16 = (unsigned char)218;
short var_17 = (short)-165;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
