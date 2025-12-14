#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1464614163;
signed char var_2 = (signed char)-62;
unsigned int var_3 = 520609690U;
unsigned long long int var_5 = 13707212373580383488ULL;
unsigned int var_6 = 4058105915U;
_Bool var_12 = (_Bool)0;
short var_15 = (short)9597;
int zero = 0;
unsigned long long int var_16 = 2048638490662134876ULL;
short var_17 = (short)-14783;
unsigned long long int var_18 = 13897813435242859759ULL;
long long int var_19 = -6418165175493042913LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
