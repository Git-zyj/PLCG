#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)63881;
unsigned long long int var_10 = 7240400221683683705ULL;
int zero = 0;
unsigned long long int var_12 = 16151945084346297726ULL;
unsigned short var_13 = (unsigned short)25585;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)35766;
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
