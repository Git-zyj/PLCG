#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1959532379;
signed char var_4 = (signed char)124;
unsigned short var_6 = (unsigned short)29850;
signed char var_9 = (signed char)-14;
unsigned int var_10 = 37010510U;
unsigned short var_11 = (unsigned short)42494;
signed char var_14 = (signed char)-20;
unsigned short var_15 = (unsigned short)45463;
int zero = 0;
int var_18 = -515323743;
int var_19 = 1318472343;
long long int var_20 = -7208007474812423783LL;
void init() {
}

void checksum() {
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
