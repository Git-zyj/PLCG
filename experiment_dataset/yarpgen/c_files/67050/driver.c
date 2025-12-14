#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4007476431543776883ULL;
long long int var_5 = 7005262142579716348LL;
short var_7 = (short)-32139;
int zero = 0;
unsigned long long int var_10 = 13829461174809664799ULL;
short var_11 = (short)6558;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
