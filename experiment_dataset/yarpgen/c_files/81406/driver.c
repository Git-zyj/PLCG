#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12529;
int var_2 = -2055922299;
short var_9 = (short)-17639;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3190945901125757202ULL;
short var_13 = (short)-6142;
unsigned long long int var_15 = 5845720801787994287ULL;
int zero = 0;
unsigned long long int var_16 = 5421324612642886461ULL;
signed char var_17 = (signed char)-89;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
