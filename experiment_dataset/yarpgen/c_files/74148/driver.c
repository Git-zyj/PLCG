#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1013;
long long int var_2 = -3774356751646012815LL;
unsigned short var_3 = (unsigned short)41231;
unsigned short var_4 = (unsigned short)63627;
unsigned int var_5 = 3320247015U;
long long int var_6 = -1086262113639614368LL;
signed char var_7 = (signed char)3;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15534390380024208405ULL;
unsigned int var_14 = 587373933U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
