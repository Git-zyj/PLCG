#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7383311290084822063LL;
unsigned int var_2 = 2355152239U;
long long int var_3 = -4263557434562558067LL;
short var_4 = (short)-30298;
unsigned short var_8 = (unsigned short)52499;
unsigned int var_9 = 1714309085U;
unsigned long long int var_12 = 16093802670354500795ULL;
unsigned int var_14 = 2464956525U;
unsigned long long int var_17 = 1547708218665867754ULL;
int zero = 0;
signed char var_18 = (signed char)-89;
unsigned int var_19 = 1661766202U;
_Bool var_20 = (_Bool)1;
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
