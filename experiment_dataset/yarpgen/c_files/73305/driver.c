#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17576;
unsigned short var_3 = (unsigned short)16219;
unsigned long long int var_5 = 12699550987115757137ULL;
int var_6 = -131374212;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10215573858909438269ULL;
long long int var_15 = 1787620751404421689LL;
void init() {
}

void checksum() {
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
