#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1728705682;
unsigned long long int var_2 = 13785062633612883192ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)59027;
unsigned short var_6 = (unsigned short)60222;
long long int var_7 = -459186688294297521LL;
unsigned short var_8 = (unsigned short)16053;
signed char var_9 = (signed char)90;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7193813607131312265LL;
int var_13 = -996507466;
long long int var_15 = 5887130774120954895LL;
int zero = 0;
long long int var_16 = 7267055402331424985LL;
signed char var_17 = (signed char)-36;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-11881;
int var_20 = -1599770257;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
