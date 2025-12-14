#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 3161292358U;
short var_10 = (short)-30855;
signed char var_14 = (signed char)-41;
unsigned long long int var_18 = 7169517624000274088ULL;
int zero = 0;
short var_20 = (short)28508;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)65256;
signed char var_23 = (signed char)-126;
void init() {
}

void checksum() {
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
