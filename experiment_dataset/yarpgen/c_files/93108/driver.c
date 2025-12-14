#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)63;
int var_2 = 1542192305;
short var_4 = (short)20917;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 17861270708187170420ULL;
unsigned int var_7 = 2086839542U;
signed char var_8 = (signed char)105;
long long int var_9 = 4230134013297406551LL;
int var_10 = -1495935185;
short var_11 = (short)-17887;
int var_12 = -210482947;
unsigned int var_13 = 2663334985U;
short var_14 = (short)-30920;
long long int var_15 = -4920944623197928049LL;
signed char var_16 = (signed char)42;
unsigned char var_17 = (unsigned char)88;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
short var_19 = (short)-7518;
unsigned long long int var_20 = 2234761568052954523ULL;
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
