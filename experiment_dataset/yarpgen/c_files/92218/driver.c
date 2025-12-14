#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)38;
long long int var_10 = -8420634651744620998LL;
unsigned long long int var_11 = 1354112080353323258ULL;
short var_12 = (short)2970;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)30853;
long long int var_18 = -7325293731923689649LL;
int zero = 0;
short var_19 = (short)15796;
unsigned long long int var_20 = 15741633268752026702ULL;
int var_21 = -1780990783;
unsigned long long int var_22 = 3970033356861543876ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
