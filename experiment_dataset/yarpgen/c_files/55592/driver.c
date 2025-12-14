#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -202467954;
signed char var_2 = (signed char)-64;
unsigned char var_3 = (unsigned char)228;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)28014;
unsigned int var_10 = 2612925656U;
int var_11 = 1837617738;
short var_13 = (short)5831;
int zero = 0;
unsigned char var_15 = (unsigned char)183;
short var_16 = (short)15472;
unsigned long long int var_17 = 11002391654003928093ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
