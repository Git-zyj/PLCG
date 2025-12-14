#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
unsigned short var_3 = (unsigned short)37492;
unsigned long long int var_4 = 5723291114952627646ULL;
int var_5 = 232740567;
unsigned long long int var_6 = 4320451420792869652ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)46;
unsigned int var_15 = 2159529093U;
short var_16 = (short)-5678;
unsigned int var_19 = 1686172511U;
int zero = 0;
int var_20 = 1125716733;
long long int var_21 = 4671669846765550752LL;
void init() {
}

void checksum() {
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
