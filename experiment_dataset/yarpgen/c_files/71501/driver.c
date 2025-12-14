#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_7 = 5785057814860305774LL;
int var_9 = 166982330;
unsigned int var_15 = 1631260580U;
short var_16 = (short)27429;
int zero = 0;
unsigned int var_17 = 3648404992U;
signed char var_18 = (signed char)-94;
unsigned long long int var_19 = 1226230069941239409ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
