#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 24197443U;
unsigned short var_2 = (unsigned short)30566;
signed char var_3 = (signed char)13;
signed char var_6 = (signed char)-22;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-76;
long long int var_13 = -6206478022498525470LL;
int zero = 0;
unsigned int var_17 = 2678983332U;
signed char var_18 = (signed char)110;
_Bool var_19 = (_Bool)0;
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
