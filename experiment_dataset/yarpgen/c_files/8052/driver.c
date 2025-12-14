#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7299211987639456511ULL;
unsigned short var_4 = (unsigned short)2496;
long long int var_7 = 4598524281869958634LL;
unsigned long long int var_11 = 11900145476569341079ULL;
long long int var_13 = -8170355242217623714LL;
long long int var_14 = 7957414872172872979LL;
unsigned char var_15 = (unsigned char)131;
int zero = 0;
short var_18 = (short)22178;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-20747;
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
