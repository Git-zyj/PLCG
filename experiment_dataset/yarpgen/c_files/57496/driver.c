#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12653293504058316048ULL;
unsigned int var_1 = 2913882898U;
unsigned int var_2 = 753218943U;
signed char var_3 = (signed char)1;
unsigned char var_4 = (unsigned char)47;
unsigned char var_5 = (unsigned char)245;
int var_6 = -447086445;
int var_7 = 1239083895;
short var_8 = (short)-2044;
signed char var_9 = (signed char)48;
int var_10 = -1300888247;
unsigned int var_11 = 1747973764U;
int zero = 0;
unsigned char var_12 = (unsigned char)33;
short var_13 = (short)5036;
unsigned char var_14 = (unsigned char)47;
unsigned long long int var_15 = 11254512176663901883ULL;
unsigned char var_16 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
