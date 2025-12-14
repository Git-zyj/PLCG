#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 166642066U;
unsigned int var_3 = 2397770081U;
_Bool var_7 = (_Bool)0;
int var_9 = 1555409716;
long long int var_10 = 4483640345867313200LL;
long long int var_12 = 175325308787868431LL;
unsigned long long int var_13 = 5941598129411999164ULL;
int zero = 0;
long long int var_17 = 3544663253688487636LL;
long long int var_18 = -2607117992845600897LL;
short var_19 = (short)-16872;
unsigned long long int var_20 = 16290017240084985359ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
