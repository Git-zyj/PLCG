#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)30361;
short var_5 = (short)19319;
unsigned long long int var_7 = 16201011081202426704ULL;
short var_17 = (short)6180;
int zero = 0;
unsigned char var_20 = (unsigned char)33;
unsigned short var_21 = (unsigned short)41792;
unsigned long long int var_22 = 13814315170828185843ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
