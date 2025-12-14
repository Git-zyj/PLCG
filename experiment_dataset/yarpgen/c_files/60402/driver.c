#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
signed char var_1 = (signed char)1;
signed char var_2 = (signed char)-9;
unsigned char var_3 = (unsigned char)192;
short var_4 = (short)17267;
signed char var_5 = (signed char)49;
signed char var_7 = (signed char)66;
short var_9 = (short)-21923;
unsigned char var_10 = (unsigned char)111;
short var_11 = (short)20447;
unsigned int var_12 = 3537712012U;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
unsigned int var_15 = 1040876625U;
signed char var_16 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
