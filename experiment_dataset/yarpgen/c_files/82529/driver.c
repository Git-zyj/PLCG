#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4737720488781754418ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)111;
int var_6 = 2012731145;
int var_7 = -1437210536;
unsigned int var_8 = 4173110386U;
short var_10 = (short)-7891;
int var_11 = -715034398;
_Bool var_13 = (_Bool)1;
signed char var_16 = (signed char)-97;
unsigned long long int var_17 = 13299991505051360032ULL;
int zero = 0;
short var_18 = (short)-14178;
int var_19 = -688016995;
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
