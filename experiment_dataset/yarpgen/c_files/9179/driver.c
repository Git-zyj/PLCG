#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17748710849807986452ULL;
signed char var_7 = (signed char)38;
unsigned long long int var_10 = 15607425837758133104ULL;
_Bool var_11 = (_Bool)0;
long long int var_15 = -5411380963960750494LL;
unsigned long long int var_17 = 11815164993906226364ULL;
int zero = 0;
short var_19 = (short)11310;
short var_20 = (short)13235;
_Bool var_21 = (_Bool)1;
short var_22 = (short)23793;
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
