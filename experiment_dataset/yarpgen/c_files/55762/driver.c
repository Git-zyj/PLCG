#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1205987316350129912ULL;
long long int var_1 = 3877112950378801278LL;
signed char var_3 = (signed char)71;
_Bool var_11 = (_Bool)1;
int var_12 = 625269342;
int var_14 = -1295280533;
_Bool var_15 = (_Bool)1;
short var_18 = (short)-10803;
int zero = 0;
long long int var_19 = 908644614645217025LL;
long long int var_20 = -7802176530301873729LL;
unsigned long long int var_21 = 16316329910365274972ULL;
long long int var_22 = -7778281425250233858LL;
long long int var_23 = 1419642268664959425LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
