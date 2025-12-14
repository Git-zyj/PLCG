#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1408470253U;
long long int var_5 = 3864119474785299876LL;
short var_6 = (short)6817;
unsigned long long int var_7 = 13268999421868583953ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1289604502843226480LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)34690;
int zero = 0;
unsigned long long int var_15 = 86688475650949285ULL;
signed char var_16 = (signed char)119;
unsigned long long int var_17 = 17763253808976268104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
