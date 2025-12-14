#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3471033648U;
unsigned int var_6 = 1040756173U;
signed char var_7 = (signed char)-32;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)4001;
unsigned int var_10 = 983383263U;
short var_11 = (short)-16802;
unsigned short var_14 = (unsigned short)37913;
int zero = 0;
unsigned int var_17 = 3116895673U;
_Bool var_18 = (_Bool)0;
int var_19 = -1865603042;
unsigned long long int var_20 = 702483871083378540ULL;
void init() {
}

void checksum() {
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
