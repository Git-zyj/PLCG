#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 267285849;
short var_2 = (short)-10378;
unsigned int var_3 = 380136054U;
unsigned long long int var_4 = 4108911890401545591ULL;
long long int var_5 = -7373633854971119077LL;
signed char var_6 = (signed char)94;
int var_10 = -2005375957;
int zero = 0;
signed char var_15 = (signed char)-7;
int var_16 = 1726710653;
short var_17 = (short)-30987;
unsigned char var_18 = (unsigned char)11;
unsigned long long int var_19 = 117452830963041057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
