#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51470;
unsigned short var_10 = (unsigned short)30137;
unsigned short var_11 = (unsigned short)62459;
unsigned int var_17 = 3848861565U;
int zero = 0;
long long int var_20 = -6034625764363200428LL;
unsigned int var_21 = 3168354237U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
