#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)6047;
signed char var_4 = (signed char)-94;
unsigned short var_7 = (unsigned short)2472;
int var_8 = 931086652;
unsigned int var_10 = 1903723370U;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1719868854;
unsigned long long int var_16 = 1854442994153281166ULL;
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
