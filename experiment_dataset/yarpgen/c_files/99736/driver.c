#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
int var_13 = -1865999427;
unsigned short var_15 = (unsigned short)37069;
unsigned long long int var_19 = 6376533250359861543ULL;
int zero = 0;
unsigned long long int var_20 = 7759145212624603263ULL;
unsigned short var_21 = (unsigned short)51774;
unsigned short var_22 = (unsigned short)57550;
unsigned short var_23 = (unsigned short)54876;
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
