#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 968218284;
unsigned int var_3 = 2205456060U;
int var_5 = 1228315983;
unsigned char var_6 = (unsigned char)243;
unsigned int var_7 = 2476504573U;
short var_8 = (short)12659;
unsigned int var_9 = 2066031012U;
unsigned char var_10 = (unsigned char)79;
unsigned char var_11 = (unsigned char)143;
int zero = 0;
unsigned short var_12 = (unsigned short)17940;
unsigned short var_13 = (unsigned short)25056;
signed char var_14 = (signed char)8;
signed char var_15 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
